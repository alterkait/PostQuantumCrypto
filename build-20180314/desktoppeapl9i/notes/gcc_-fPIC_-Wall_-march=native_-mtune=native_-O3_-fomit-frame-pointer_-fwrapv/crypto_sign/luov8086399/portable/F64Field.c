F64Field.c: In function ‘pqcrypto_sign_luov8086399_impl_priv_f64addInPlace’:
F64Field.c:43:2: warning: dereferencing type-punned pointer will break strict-aliasing rules [-Wstrict-aliasing]
  *((uint64_t *) a->coef) ^= *((uint64_t *) b->coef);
  ^
F64Field.c:43:2: warning: dereferencing type-punned pointer will break strict-aliasing rules [-Wstrict-aliasing]
