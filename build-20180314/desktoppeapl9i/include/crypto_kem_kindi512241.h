#ifndef crypto_kem_kindi512241_H
#define crypto_kem_kindi512241_H

#define crypto_kem_kindi512241_keypair pqcrypto_kem_kindi512241_impl_keypair
#define crypto_kem_kindi512241_enc pqcrypto_kem_kindi512241_impl_enc
#define crypto_kem_kindi512241_dec pqcrypto_kem_kindi512241_impl_dec
#define crypto_kem_kindi512241_PUBLICKEYBYTES pqcrypto_kem_kindi512241_impl_PUBLICKEYBYTES
#define crypto_kem_kindi512241_SECRETKEYBYTES pqcrypto_kem_kindi512241_impl_SECRETKEYBYTES
#define crypto_kem_kindi512241_BYTES pqcrypto_kem_kindi512241_impl_BYTES
#define crypto_kem_kindi512241_CIPHERTEXTBYTES pqcrypto_kem_kindi512241_impl_CIPHERTEXTBYTES
#define crypto_kem_kindi512241_implementation pqcrypto_kem_kindi512241_impl_implementation
#define crypto_kem_kindi512241_version pqcrypto_kem_kindi512241_impl_version
#define crypto_kem_kindi512241_compiler pqcrypto_kem_kindi512241_impl_compiler

#define pqcrypto_kem_kindi512241_impl_PUBLICKEYBYTES 1728
#define pqcrypto_kem_kindi512241_impl_SECRETKEYBYTES 2112
#define pqcrypto_kem_kindi512241_impl_BYTES 64
#define pqcrypto_kem_kindi512241_impl_CIPHERTEXTBYTES 2752

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_kindi512241_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512241_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512241_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_kindi512241_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512241_version[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512241_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
