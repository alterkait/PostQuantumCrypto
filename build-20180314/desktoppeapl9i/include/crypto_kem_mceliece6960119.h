#ifndef crypto_kem_mceliece6960119_H
#define crypto_kem_mceliece6960119_H

#define crypto_kem_mceliece6960119_keypair pqcrypto_kem_mceliece6960119_impl_keypair
#define crypto_kem_mceliece6960119_enc pqcrypto_kem_mceliece6960119_impl_enc
#define crypto_kem_mceliece6960119_dec pqcrypto_kem_mceliece6960119_impl_dec
#define crypto_kem_mceliece6960119_PUBLICKEYBYTES pqcrypto_kem_mceliece6960119_impl_PUBLICKEYBYTES
#define crypto_kem_mceliece6960119_SECRETKEYBYTES pqcrypto_kem_mceliece6960119_impl_SECRETKEYBYTES
#define crypto_kem_mceliece6960119_BYTES pqcrypto_kem_mceliece6960119_impl_BYTES
#define crypto_kem_mceliece6960119_CIPHERTEXTBYTES pqcrypto_kem_mceliece6960119_impl_CIPHERTEXTBYTES
#define crypto_kem_mceliece6960119_implementation pqcrypto_kem_mceliece6960119_impl_implementation
#define crypto_kem_mceliece6960119_version pqcrypto_kem_mceliece6960119_impl_version
#define crypto_kem_mceliece6960119_compiler pqcrypto_kem_mceliece6960119_impl_compiler

#define pqcrypto_kem_mceliece6960119_impl_PUBLICKEYBYTES 1047319
#define pqcrypto_kem_mceliece6960119_impl_SECRETKEYBYTES 13908
#define pqcrypto_kem_mceliece6960119_impl_BYTES 32
#define pqcrypto_kem_mceliece6960119_impl_CIPHERTEXTBYTES 226

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_mceliece6960119_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_mceliece6960119_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_mceliece6960119_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_mceliece6960119_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_mceliece6960119_version[] __attribute__((visibility("default")));
extern const char crypto_kem_mceliece6960119_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
