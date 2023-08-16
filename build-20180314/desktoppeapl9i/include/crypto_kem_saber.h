#ifndef crypto_kem_saber_H
#define crypto_kem_saber_H

#define crypto_kem_saber_keypair pqcrypto_kem_saber_impl_keypair
#define crypto_kem_saber_enc pqcrypto_kem_saber_impl_enc
#define crypto_kem_saber_dec pqcrypto_kem_saber_impl_dec
#define crypto_kem_saber_PUBLICKEYBYTES pqcrypto_kem_saber_impl_PUBLICKEYBYTES
#define crypto_kem_saber_SECRETKEYBYTES pqcrypto_kem_saber_impl_SECRETKEYBYTES
#define crypto_kem_saber_BYTES pqcrypto_kem_saber_impl_BYTES
#define crypto_kem_saber_CIPHERTEXTBYTES pqcrypto_kem_saber_impl_CIPHERTEXTBYTES
#define crypto_kem_saber_implementation pqcrypto_kem_saber_impl_implementation
#define crypto_kem_saber_version pqcrypto_kem_saber_impl_version
#define crypto_kem_saber_compiler pqcrypto_kem_saber_impl_compiler

#define pqcrypto_kem_saber_impl_PUBLICKEYBYTES 992
#define pqcrypto_kem_saber_impl_SECRETKEYBYTES 2304
#define pqcrypto_kem_saber_impl_BYTES 32
#define pqcrypto_kem_saber_impl_CIPHERTEXTBYTES 1088

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_saber_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_saber_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_saber_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_saber_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_saber_version[] __attribute__((visibility("default")));
extern const char crypto_kem_saber_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
