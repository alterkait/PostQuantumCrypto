import os
from ctypes import CDLL, c_char_p, c_int, c_ulonglong, POINTER, byref, create_string_buffer

lib = CDLL('%s/../lib/0/libpqcrypto.so' % os.path.dirname(os.path.abspath(__file__)))

class wrap_hash:
  def __init__(self,prefix,hlen):
    self.hlen = hlen
    self.c_hash = getattr(lib,'pqcrypto_hash_%s_impl' % prefix)
    self.c_hash.argtypes = [c_char_p,c_char_p,c_ulonglong]
    self.c_hash.restype = c_int

  def hash(self,m):
    mlen = c_ulonglong(len(m))
    m = create_string_buffer(m)
    h = create_string_buffer(self.hlen)
    if self.c_hash(h,m,mlen): raise Exception('hash failed')
    return h.raw

  __call__ = hash

class wrap_onetimeauth:
  def __init__(self,prefix,klen,alen):
    self.klen = klen
    self.alen = alen
    self.c_auth = getattr(lib,'pqcrypto_onetimeauth_%s_impl' % prefix)
    self.c_auth.argtypes = [c_char_p,c_char_p,c_ulonglong,c_char_p]
    self.c_auth.restype = c_int
    self.c_verify = getattr(lib,'pqcrypto_onetimeauth_%s_impl_verify' % prefix)
    self.c_verify.argtypes = [c_char_p,c_char_p,c_ulonglong,c_char_p]
    self.c_verify.restype = c_int

  def auth(self,m,k):
    assert len(k) == self.klen
    mlen = c_ulonglong(len(m))
    m = create_string_buffer(m)
    k = create_string_buffer(k)
    a = create_string_buffer(self.alen)
    if self.c_auth(a,m,mlen,k): raise Exception('auth failed')
    return a.raw

  def verify(self,a,m,k):
    assert len(k) == self.klen
    assert len(a) == self.alen
    mlen = c_ulonglong(len(m))
    m = create_string_buffer(m)
    k = create_string_buffer(k)
    a = create_string_buffer(a)
    if self.c_verify(a,m,mlen,k): raise Exception('verify failed')

  __call__ = auth

class wrap_stream:
  def __init__(self,prefix,klen,nlen):
    self.klen = klen
    self.nlen = nlen
    self.c_stream = getattr(lib,'pqcrypto_stream_%s_impl' % prefix)
    self.c_stream.argtypes = [c_char_p,c_ulonglong,c_char_p,c_char_p]
    self.c_stream.restype = c_int
    self.c_xor = getattr(lib,'pqcrypto_stream_%s_impl_xor' % prefix)
    self.c_xor.argtypes = [c_char_p,c_char_p,c_ulonglong,c_char_p,c_char_p]
    self.c_xor.restype = c_int

  def stream(self,mlen,n,k):
    assert len(n) == self.nlen
    assert len(k) == self.klen
    m = create_string_buffer(mlen)
    mlen = c_ulonglong(mlen)
    n = create_string_buffer(n)
    k = create_string_buffer(k)
    if self.c_stream(m,mlen,n,k): raise Exception('stream failed')
    return m.raw

  def xor(self,m,n,k):
    assert len(n) == self.nlen
    assert len(k) == self.klen
    mlen = c_ulonglong(len(m))
    c = create_string_buffer(len(m))
    m = create_string_buffer(m)
    n = create_string_buffer(n)
    k = create_string_buffer(k)
    # XXX: overlapping c with m doesn't seem to work with openssl aes
    if self.c_xor(c,m,mlen,n,k): raise Exception('xor failed')
    return c.raw

  __call__ = stream

class wrap_scalarmult:
  def __init__(self,prefix,pklen,sklen):
    self.pklen = pklen
    self.sklen = sklen
    self.c_base = getattr(lib,'pqcrypto_scalarmult_%s_impl_base' % prefix)
    self.c_base.argtypes = [c_char_p,c_char_p]
    self.c_base.restype = c_int
    self.c_scalarmult = getattr(lib,'pqcrypto_scalarmult_%s_impl' % prefix)
    self.c_scalarmult.argtypes = [c_char_p,c_char_p,c_char_p]
    self.c_scalarmult.restype = c_int

  def base(self,sk):
    assert len(sk) == self.sklen
    sk = create_string_buffer(sk)
    out = create_string_buffer(self.pklen)
    if self.c_base(out,sk): raise Exception('scalarmult_base failed')
    return out.raw

  def scalarmult(self,sk,pk):
    assert len(pk) == self.pklen
    assert len(sk) == self.sklen
    pk = create_string_buffer(pk)
    sk = create_string_buffer(sk)
    out = create_string_buffer(self.pklen)
    if self.c_scalarmult(out,sk,pk): raise Exception('scalarmult failed')
    return out.raw

  __call__ = scalarmult

class wrap_sign:
  def __init__(self,prefix,pklen,sklen,slen):
    self.pklen = pklen
    self.sklen = sklen
    self.slen = slen
    self.c_keypair = getattr(lib,'pqcrypto_sign_%s_impl_keypair' % prefix)
    self.c_keypair.argtypes = [c_char_p,c_char_p]
    self.c_keypair.restype = c_int
    self.c_sign = getattr(lib,'pqcrypto_sign_%s_impl' % prefix)
    self.c_sign.argtypes = [c_char_p,POINTER(c_ulonglong),c_char_p,c_ulonglong,c_char_p]
    self.c_sign.restype = c_int
    self.c_open = getattr(lib,'pqcrypto_sign_%s_impl_open' % prefix)
    self.c_open.argtypes = [c_char_p,POINTER(c_ulonglong),c_char_p,c_ulonglong,c_char_p]
    self.c_open.restype = c_int

  def keypair(self):
    pk = create_string_buffer(self.pklen)
    sk = create_string_buffer(self.sklen)
    if self.c_keypair(pk,sk): raise Exception('keypair failed')
    return pk.raw,sk.raw

  def sign(self,m,sk):
    assert len(sk) == self.sklen
    mlen = c_ulonglong(len(m))
    smlen = c_ulonglong(0)
    sm = create_string_buffer(len(m) + self.slen)
    m = create_string_buffer(m)
    sk = create_string_buffer(sk)
    if self.c_sign(sm,byref(smlen),m,mlen,sk): raise Exception('sign failed')
    return sm.raw[:smlen.value]

  def open(self,sm,pk):
    assert len(pk) == self.pklen
    smlen = c_ulonglong(len(sm))
    m = create_string_buffer(len(sm))
    mlen = c_ulonglong(0)
    pk = create_string_buffer(pk)
    if self.c_open(m,byref(mlen),sm,smlen,pk): raise Exception('open failed')
    return m.raw[:mlen.value]

  __call__ = keypair

class wrap_kem:
  def __init__(self,prefix,pklen,sklen,clen,klen):
    self.pklen = pklen
    self.sklen = sklen
    self.clen = clen
    self.klen = klen
    self.c_keypair = getattr(lib,'pqcrypto_kem_%s_impl_keypair' % prefix)
    self.c_keypair.argtypes = [c_char_p,c_char_p]
    self.c_keypair.restype = c_int
    self.c_enc = getattr(lib,'pqcrypto_kem_%s_impl_enc' % prefix)
    self.c_enc.argtypes = [c_char_p,c_char_p,c_char_p]
    self.c_enc.restype = c_int
    self.c_dec = getattr(lib,'pqcrypto_kem_%s_impl_dec' % prefix)
    self.c_dec.argtypes = [c_char_p,c_char_p,c_char_p]
    self.c_dec.restype = c_int

  def keypair(self):
    pk = create_string_buffer(self.pklen)
    sk = create_string_buffer(self.sklen)
    if self.c_keypair(pk,sk): raise Exception('keypair failed')
    return pk.raw,sk.raw

  def enc(self,pk):
    assert len(pk) == self.pklen
    c = create_string_buffer(self.clen)
    k = create_string_buffer(self.klen)
    pk = create_string_buffer(pk)
    if self.c_enc(c,k,pk): raise Exception('enc failed')
    return c.raw,k.raw

  def dec(self,c,sk):
    assert len(c) == self.clen
    assert len(sk) == self.sklen
    k = create_string_buffer(self.klen)
    c = create_string_buffer(c)
    sk = create_string_buffer(sk)
    if self.c_dec(k,c,sk): raise Exception('dec failed')
    return k.raw

  __call__ = keypair

class wrap_randombytes:
  def __init__(self):
    self.c_randombytes = getattr(lib,'pqrandombytes_impl')
    self.c_randombytes.argtypes = [c_char_p,c_ulonglong]
    self.c_randombytes.restype = None

  def __call__(self,rlen):
    r = create_string_buffer(rlen)
    rlen = c_ulonglong(rlen)
    self.c_randombytes(r,rlen)
    return r.raw

randombytes = wrap_randombytes()

class struct:
  pass

x = []
x += [('sha512',64)]
x += [('shake256',136)]
hash = struct()
for p,hlen in x:
  try:
    setattr(hash,p,wrap_hash(p,hlen))
  except:
    pass

x = []
x += [('poly1305',32,16)]
onetimeauth = struct()
for p,klen,alen in x:
  try:
    setattr(onetimeauth,p,wrap_onetimeauth(p,klen,alen))
  except:
    pass

x = []
x += [('aes256ctr',32,16)]
x += [('chacha20',32,8)]
x += [('salsa20',32,8)]
stream = struct()
for p,klen,nlen in x:
  try:
    setattr(stream,p,wrap_stream(p,klen,nlen))
  except:
    pass

x = []
x += [('x25519notpq',32,32)]
scalarmult = struct()
for p,pklen,sklen in x:
  try:
    setattr(scalarmult,p,wrap_scalarmult(p,pklen,sklen))
  except:
    pass

x = []
x += [('dilithium2',1184,2800,2044)]
x += [('dilithium3',1472,3504,2701)]
x += [('dilithium4',1760,3856,3366)]
x += [('gui184',422122,14985,45)]
x += [('gui312',1990045,41755,63)]
x += [('gui448',5903405,94757,83)]
x += [('luov4849242',7536,32,1746)]
x += [('luov6468330',19973,32,3184)]
x += [('luov8086399',40248,32,4850)]
x += [('luov8117404',100989,32,521)]
x += [('luov863256',15908,32,319)]
x += [('luov890351',46101,32,441)]
x += [('mqdss48',62,32,32882)]
x += [('mqdss64',88,48,67800)]
x += [('picnicl1fs',33,49,34004)]
x += [('picnicl1ur',33,49,53933)]
x += [('picnicl3fs',49,73,76744)]
x += [('picnicl3ur',49,73,121817)]
x += [('picnicl5fs',65,97,132828)]
x += [('picnicl5ur',65,97,209478)]
x += [('qtesla128',4128,2112,3104)]
x += [('qtesla192',8224,8256,6176)]
x += [('qtesla256',8224,8256,6176)]
x += [('rainbow1a',152097,100209,64)]
x += [('rainbow1b',163185,114308,78)]
x += [('rainbow1c',192241,143385,104)]
x += [('rainbow3b',564535,409463,112)]
x += [('rainbow3c',720793,537781,156)]
x += [('rainbow4a',565489,376141,92)]
x += [('rainbow5c',1723681,1274317,204)]
x += [('rainbow6a',1351361,892079,118)]
x += [('rainbow6b',1456225,1016868,147)]
x += [('sphincsf128haraka',32,64,16976)]
x += [('sphincsf128sha256',32,64,16976)]
x += [('sphincsf128shake256',32,64,16976)]
x += [('sphincsf192haraka',48,96,35664)]
x += [('sphincsf192sha256',48,96,35664)]
x += [('sphincsf192shake256',48,96,35664)]
x += [('sphincsf256haraka',64,128,49216)]
x += [('sphincsf256sha256',64,128,49216)]
x += [('sphincsf256shake256',64,128,49216)]
x += [('sphincss128haraka',32,64,8080)]
x += [('sphincss128sha256',32,64,8080)]
x += [('sphincss128shake256',32,64,8080)]
x += [('sphincss192haraka',48,96,17064)]
x += [('sphincss192sha256',48,96,17064)]
x += [('sphincss192shake256',48,96,17064)]
x += [('sphincss256haraka',64,128,29792)]
x += [('sphincss256sha256',64,128,29792)]
x += [('sphincss256shake256',64,128,29792)]
sign = struct()
for p,pklen,sklen,slen in x:
  try:
    setattr(sign,p,wrap_sign(p,pklen,sklen,slen))
  except:
    pass

x = []
x += [('bigquake1',25482,14772,201,32)]
x += [('bigquake3',84132,30860,406,32)]
x += [('bigquake5',149800,41804,492,32)]
x += [('dags3',11616,2973704,2144,64)]
x += [('dags5',11616,2973704,2144,64)]
x += [('firesaber',1312,3040,1472,32)]
x += [('frodokem640',9616,19872,9736,16)]
x += [('frodokem976',15632,31272,15768,24)]
x += [('kindi256342',1184,1472,1824,32)]
x += [('kindi256522',1984,2304,2752,64)]
x += [('kindi512222',1456,1712,2544,48)]
x += [('kindi512241',1728,2112,2752,64)]
x += [('kindi512321',2368,2752,3392,64)]
x += [('kyber1024',1440,3168,1504,32)]
x += [('kyber512',736,1632,800,32)]
x += [('kyber768',1088,2400,1152,32)]
x += [('lightsaber',672,1568,736,32)]
x += [('mceliece6960119',1047319,13908,226,32)]
x += [('mceliece8192128',1357824,14080,240,32)]
x += [('newhope1024cca',1824,3680,2208,32)]
x += [('newhope512cca',928,1888,1120,32)]
x += [('ntruhrss701',1138,1418,1278,32)]
x += [('ntrulpr4591761',1047,1238,1175,32)]
x += [('ramstakers216091',27044,54056,28064,32)]
x += [('ramstakers756839',94637,189242,96167,32)]
x += [('saber',992,2304,1088,32)]
x += [('sntrup4591761',1218,1600,1047,32)]
kem = struct()
for p,pklen,sklen,clen,klen in x:
  try:
    setattr(kem,p,wrap_kem(p,pklen,sklen,clen,klen))
  except:
    pass
