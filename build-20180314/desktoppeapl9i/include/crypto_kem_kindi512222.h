#ifndef crypto_kem_kindi512222_H
#define crypto_kem_kindi512222_H

#define crypto_kem_kindi512222_keypair pqcrypto_kem_kindi512222_impl_keypair
#define crypto_kem_kindi512222_enc pqcrypto_kem_kindi512222_impl_enc
#define crypto_kem_kindi512222_dec pqcrypto_kem_kindi512222_impl_dec
#define crypto_kem_kindi512222_PUBLICKEYBYTES pqcrypto_kem_kindi512222_impl_PUBLICKEYBYTES
#define crypto_kem_kindi512222_SECRETKEYBYTES pqcrypto_kem_kindi512222_impl_SECRETKEYBYTES
#define crypto_kem_kindi512222_BYTES pqcrypto_kem_kindi512222_impl_BYTES
#define crypto_kem_kindi512222_CIPHERTEXTBYTES pqcrypto_kem_kindi512222_impl_CIPHERTEXTBYTES
#define crypto_kem_kindi512222_implementation pqcrypto_kem_kindi512222_impl_implementation
#define crypto_kem_kindi512222_version pqcrypto_kem_kindi512222_impl_version
#define crypto_kem_kindi512222_compiler pqcrypto_kem_kindi512222_impl_compiler

#define pqcrypto_kem_kindi512222_impl_PUBLICKEYBYTES 1456
#define pqcrypto_kem_kindi512222_impl_SECRETKEYBYTES 1712
#define pqcrypto_kem_kindi512222_impl_BYTES 48
#define pqcrypto_kem_kindi512222_impl_CIPHERTEXTBYTES 2544

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_kindi512222_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512222_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_kindi512222_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_kindi512222_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512222_version[] __attribute__((visibility("default")));
extern const char crypto_kem_kindi512222_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
