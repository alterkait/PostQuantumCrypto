#ifndef crypto_kem_kyber1024_H
#define crypto_kem_kyber1024_H

#define crypto_kem_kyber1024_keypair pqcrypto_kem_kyber1024_impl_keypair
#define crypto_kem_kyber1024_enc pqcrypto_kem_kyber1024_impl_enc
#define crypto_kem_kyber1024_dec pqcrypto_kem_kyber1024_impl_dec
#define crypto_kem_kyber1024_PUBLICKEYBYTES pqcrypto_kem_kyber1024_impl_PUBLICKEYBYTES
#define crypto_kem_kyber1024_SECRETKEYBYTES pqcrypto_kem_kyber1024_impl_SECRETKEYBYTES
#define crypto_kem_kyber1024_BYTES pqcrypto_kem_kyber1024_impl_BYTES
#define crypto_kem_kyber1024_CIPHERTEXTBYTES pqcrypto_kem_kyber1024_impl_CIPHERTEXTBYTES
#define crypto_kem_kyber1024_implementation pqcrypto_kem_kyber1024_impl_implementation
#define crypto_kem_kyber1024_version pqcrypto_kem_kyber1024_impl_version
#define crypto_kem_kyber1024_compiler pqcrypto_kem_kyber1024_impl_compiler

#define pqcrypto_kem_kyber1024_impl_PUBLICKEYBYTES 1440
#define pqcrypto_kem_kyber1024_impl_SECRETKEYBYTES 3168
#define pqcrypto_kem_kyber1024_impl_BYTES 32
#define pqcrypto_kem_kyber1024_impl_CIPHERTEXTBYTES 1504

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_kyber1024_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kyber1024_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kyber1024_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_kyber1024_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_kyber1024_version[] __attribute__((visibility("default")));
extern const char crypto_kem_kyber1024_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
