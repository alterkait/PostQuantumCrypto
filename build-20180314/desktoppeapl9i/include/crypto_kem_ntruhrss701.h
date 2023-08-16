#ifndef crypto_kem_ntruhrss701_H
#define crypto_kem_ntruhrss701_H

#define crypto_kem_ntruhrss701_keypair pqcrypto_kem_ntruhrss701_impl_keypair
#define crypto_kem_ntruhrss701_enc pqcrypto_kem_ntruhrss701_impl_enc
#define crypto_kem_ntruhrss701_dec pqcrypto_kem_ntruhrss701_impl_dec
#define crypto_kem_ntruhrss701_PUBLICKEYBYTES pqcrypto_kem_ntruhrss701_impl_PUBLICKEYBYTES
#define crypto_kem_ntruhrss701_SECRETKEYBYTES pqcrypto_kem_ntruhrss701_impl_SECRETKEYBYTES
#define crypto_kem_ntruhrss701_BYTES pqcrypto_kem_ntruhrss701_impl_BYTES
#define crypto_kem_ntruhrss701_CIPHERTEXTBYTES pqcrypto_kem_ntruhrss701_impl_CIPHERTEXTBYTES
#define crypto_kem_ntruhrss701_implementation pqcrypto_kem_ntruhrss701_impl_implementation
#define crypto_kem_ntruhrss701_version pqcrypto_kem_ntruhrss701_impl_version
#define crypto_kem_ntruhrss701_compiler pqcrypto_kem_ntruhrss701_impl_compiler

#define pqcrypto_kem_ntruhrss701_impl_PUBLICKEYBYTES 1138
#define pqcrypto_kem_ntruhrss701_impl_SECRETKEYBYTES 1418
#define pqcrypto_kem_ntruhrss701_impl_BYTES 32
#define pqcrypto_kem_ntruhrss701_impl_CIPHERTEXTBYTES 1278

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_ntruhrss701_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_ntruhrss701_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_ntruhrss701_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_ntruhrss701_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_ntruhrss701_version[] __attribute__((visibility("default")));
extern const char crypto_kem_ntruhrss701_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
