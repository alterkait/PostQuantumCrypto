#ifndef crypto_kem_kindi512321_H
#define crypto_kem_kindi512321_H

#define crypto_kem_kindi512321_keypair pqcrypto_kem_kindi512321_impl_keypair
#define crypto_kem_kindi512321_enc pqcrypto_kem_kindi512321_impl_enc
#define crypto_kem_kindi512321_dec pqcrypto_kem_kindi512321_impl_dec
#define crypto_kem_kindi512321_PUBLICKEYBYTES pqcrypto_kem_kindi512321_impl_PUBLICKEYBYTES
#define crypto_kem_kindi512321_SECRETKEYBYTES pqcrypto_kem_kindi512321_impl_SECRETKEYBYTES
#define crypto_kem_kindi512321_BYTES pqcrypto_kem_kindi512321_impl_BYTES
#define crypto_kem_kindi512321_CIPHERTEXTBYTES pqcrypto_kem_kindi512321_impl_CIPHERTEXTBYTES
#define crypto_kem_kindi512321_implementation pqcrypto_kem_kindi512321_impl_implementation
#define crypto_kem_kindi512321_version pqcrypto_kem_kindi512321_impl_version
#define crypto_kem_kindi512321_compiler pqcrypto_kem_kindi512321_impl_compiler

#define pqcrypto_kem_kindi512321_impl_PUBLICKEYBYTES 2368
#define pqcrypto_kem_kindi512321_impl_SECRETKEYBYTES 2752
#define pqcrypto_kem_kindi512321_impl_BYTES 64
#define pqcrypto_kem_kindi512321_impl_CIPHERTEXTBYTES 3392

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_kindi512321_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512321_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512321_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_kindi512321_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512321_version[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512321_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
