#ifndef pqcrypto_kem_kyber512_H
#define pqcrypto_kem_kyber512_H

#define pqcrypto_kem_kyber512_keypair pqcrypto_kem_kyber512_impl_keypair
#define pqcrypto_kem_kyber512_enc pqcrypto_kem_kyber512_impl_enc
#define pqcrypto_kem_kyber512_dec pqcrypto_kem_kyber512_impl_dec
#define pqcrypto_kem_kyber512_PUBLICKEYBYTES pqcrypto_kem_kyber512_impl_PUBLICKEYBYTES
#define pqcrypto_kem_kyber512_SECRETKEYBYTES pqcrypto_kem_kyber512_impl_SECRETKEYBYTES
#define pqcrypto_kem_kyber512_BYTES pqcrypto_kem_kyber512_impl_BYTES
#define pqcrypto_kem_kyber512_CIPHERTEXTBYTES pqcrypto_kem_kyber512_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_kyber512_implementation pqcrypto_kem_kyber512_impl_implementation
#define pqcrypto_kem_kyber512_version pqcrypto_kem_kyber512_impl_version
#define pqcrypto_kem_kyber512_compiler pqcrypto_kem_kyber512_impl_compiler

#define pqcrypto_kem_kyber512_impl_PUBLICKEYBYTES 736
#define pqcrypto_kem_kyber512_impl_SECRETKEYBYTES 1632
#define pqcrypto_kem_kyber512_impl_BYTES 32
#define pqcrypto_kem_kyber512_impl_CIPHERTEXTBYTES 800

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_kyber512_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kyber512_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kyber512_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_kyber512_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kyber512_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kyber512_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
