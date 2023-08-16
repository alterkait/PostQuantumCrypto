#ifndef crypto_kem_firesaber_H
#define crypto_kem_firesaber_H

#define crypto_kem_firesaber_keypair pqcrypto_kem_firesaber_impl_keypair
#define crypto_kem_firesaber_enc pqcrypto_kem_firesaber_impl_enc
#define crypto_kem_firesaber_dec pqcrypto_kem_firesaber_impl_dec
#define crypto_kem_firesaber_PUBLICKEYBYTES pqcrypto_kem_firesaber_impl_PUBLICKEYBYTES
#define crypto_kem_firesaber_SECRETKEYBYTES pqcrypto_kem_firesaber_impl_SECRETKEYBYTES
#define crypto_kem_firesaber_BYTES pqcrypto_kem_firesaber_impl_BYTES
#define crypto_kem_firesaber_CIPHERTEXTBYTES pqcrypto_kem_firesaber_impl_CIPHERTEXTBYTES
#define crypto_kem_firesaber_implementation pqcrypto_kem_firesaber_impl_implementation
#define crypto_kem_firesaber_version pqcrypto_kem_firesaber_impl_version
#define crypto_kem_firesaber_compiler pqcrypto_kem_firesaber_impl_compiler

#define pqcrypto_kem_firesaber_impl_PUBLICKEYBYTES 1312
#define pqcrypto_kem_firesaber_impl_SECRETKEYBYTES 3040
#define pqcrypto_kem_firesaber_impl_BYTES 32
#define pqcrypto_kem_firesaber_impl_CIPHERTEXTBYTES 1472

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_firesaber_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_firesaber_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_firesaber_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_firesaber_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_firesaber_version[] __attribute__((visibility("default")));
extern const char crypto_kem_firesaber_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
