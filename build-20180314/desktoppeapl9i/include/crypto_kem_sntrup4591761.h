#ifndef crypto_kem_sntrup4591761_H
#define crypto_kem_sntrup4591761_H

#define crypto_kem_sntrup4591761_keypair pqcrypto_kem_sntrup4591761_impl_keypair
#define crypto_kem_sntrup4591761_enc pqcrypto_kem_sntrup4591761_impl_enc
#define crypto_kem_sntrup4591761_dec pqcrypto_kem_sntrup4591761_impl_dec
#define crypto_kem_sntrup4591761_PUBLICKEYBYTES pqcrypto_kem_sntrup4591761_impl_PUBLICKEYBYTES
#define crypto_kem_sntrup4591761_SECRETKEYBYTES pqcrypto_kem_sntrup4591761_impl_SECRETKEYBYTES
#define crypto_kem_sntrup4591761_BYTES pqcrypto_kem_sntrup4591761_impl_BYTES
#define crypto_kem_sntrup4591761_CIPHERTEXTBYTES pqcrypto_kem_sntrup4591761_impl_CIPHERTEXTBYTES
#define crypto_kem_sntrup4591761_implementation pqcrypto_kem_sntrup4591761_impl_implementation
#define crypto_kem_sntrup4591761_version pqcrypto_kem_sntrup4591761_impl_version
#define crypto_kem_sntrup4591761_compiler pqcrypto_kem_sntrup4591761_impl_compiler

#define pqcrypto_kem_sntrup4591761_impl_PUBLICKEYBYTES 1218
#define pqcrypto_kem_sntrup4591761_impl_SECRETKEYBYTES 1600
#define pqcrypto_kem_sntrup4591761_impl_BYTES 32
#define pqcrypto_kem_sntrup4591761_impl_CIPHERTEXTBYTES 1047

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_sntrup4591761_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_sntrup4591761_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_sntrup4591761_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_sntrup4591761_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_sntrup4591761_version[] __attribute__((visibility("default")));
extern const char crypto_kem_sntrup4591761_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
