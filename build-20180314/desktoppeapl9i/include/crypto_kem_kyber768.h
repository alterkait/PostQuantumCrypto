#ifndef crypto_kem_kyber768_H
#define crypto_kem_kyber768_H

#define crypto_kem_kyber768_keypair pqcrypto_kem_kyber768_impl_keypair
#define crypto_kem_kyber768_enc pqcrypto_kem_kyber768_impl_enc
#define crypto_kem_kyber768_dec pqcrypto_kem_kyber768_impl_dec
#define crypto_kem_kyber768_PUBLICKEYBYTES pqcrypto_kem_kyber768_impl_PUBLICKEYBYTES
#define crypto_kem_kyber768_SECRETKEYBYTES pqcrypto_kem_kyber768_impl_SECRETKEYBYTES
#define crypto_kem_kyber768_BYTES pqcrypto_kem_kyber768_impl_BYTES
#define crypto_kem_kyber768_CIPHERTEXTBYTES pqcrypto_kem_kyber768_impl_CIPHERTEXTBYTES
#define crypto_kem_kyber768_implementation pqcrypto_kem_kyber768_impl_implementation
#define crypto_kem_kyber768_version pqcrypto_kem_kyber768_impl_version
#define crypto_kem_kyber768_compiler pqcrypto_kem_kyber768_impl_compiler

#define pqcrypto_kem_kyber768_impl_PUBLICKEYBYTES 1088
#define pqcrypto_kem_kyber768_impl_SECRETKEYBYTES 2400
#define pqcrypto_kem_kyber768_impl_BYTES 32
#define pqcrypto_kem_kyber768_impl_CIPHERTEXTBYTES 1152

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_kyber768_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kyber768_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kyber768_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_kyber768_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_kyber768_version[] __attribute__((visibility("default")));
extern const char crypto_kem_kyber768_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
