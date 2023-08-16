#ifndef crypto_kem_ramstakers216091_H
#define crypto_kem_ramstakers216091_H

#define crypto_kem_ramstakers216091_keypair pqcrypto_kem_ramstakers216091_impl_keypair
#define crypto_kem_ramstakers216091_enc pqcrypto_kem_ramstakers216091_impl_enc
#define crypto_kem_ramstakers216091_dec pqcrypto_kem_ramstakers216091_impl_dec
#define crypto_kem_ramstakers216091_PUBLICKEYBYTES pqcrypto_kem_ramstakers216091_impl_PUBLICKEYBYTES
#define crypto_kem_ramstakers216091_SECRETKEYBYTES pqcrypto_kem_ramstakers216091_impl_SECRETKEYBYTES
#define crypto_kem_ramstakers216091_BYTES pqcrypto_kem_ramstakers216091_impl_BYTES
#define crypto_kem_ramstakers216091_CIPHERTEXTBYTES pqcrypto_kem_ramstakers216091_impl_CIPHERTEXTBYTES
#define crypto_kem_ramstakers216091_implementation pqcrypto_kem_ramstakers216091_impl_implementation
#define crypto_kem_ramstakers216091_version pqcrypto_kem_ramstakers216091_impl_version
#define crypto_kem_ramstakers216091_compiler pqcrypto_kem_ramstakers216091_impl_compiler

#define pqcrypto_kem_ramstakers216091_impl_PUBLICKEYBYTES 27044
#define pqcrypto_kem_ramstakers216091_impl_SECRETKEYBYTES 54056
#define pqcrypto_kem_ramstakers216091_impl_BYTES 32
#define pqcrypto_kem_ramstakers216091_impl_CIPHERTEXTBYTES 28064

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_ramstakers216091_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_ramstakers216091_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_ramstakers216091_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_ramstakers216091_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_ramstakers216091_version[] __attribute__((visibility("default")));
extern const char crypto_kem_ramstakers216091_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
