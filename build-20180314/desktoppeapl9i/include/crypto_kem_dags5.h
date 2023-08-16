#ifndef crypto_kem_dags5_H
#define crypto_kem_dags5_H

#define crypto_kem_dags5_keypair pqcrypto_kem_dags5_impl_keypair
#define crypto_kem_dags5_enc pqcrypto_kem_dags5_impl_enc
#define crypto_kem_dags5_dec pqcrypto_kem_dags5_impl_dec
#define crypto_kem_dags5_PUBLICKEYBYTES pqcrypto_kem_dags5_impl_PUBLICKEYBYTES
#define crypto_kem_dags5_SECRETKEYBYTES pqcrypto_kem_dags5_impl_SECRETKEYBYTES
#define crypto_kem_dags5_BYTES pqcrypto_kem_dags5_impl_BYTES
#define crypto_kem_dags5_CIPHERTEXTBYTES pqcrypto_kem_dags5_impl_CIPHERTEXTBYTES
#define crypto_kem_dags5_implementation pqcrypto_kem_dags5_impl_implementation
#define crypto_kem_dags5_version pqcrypto_kem_dags5_impl_version
#define crypto_kem_dags5_compiler pqcrypto_kem_dags5_impl_compiler

#define pqcrypto_kem_dags5_impl_PUBLICKEYBYTES 11616
#define pqcrypto_kem_dags5_impl_SECRETKEYBYTES 2973704
#define pqcrypto_kem_dags5_impl_BYTES 64
#define pqcrypto_kem_dags5_impl_CIPHERTEXTBYTES 2144

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_dags5_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_dags5_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_dags5_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_dags5_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_dags5_version[] __attribute__((visibility("default")));
extern const char crypto_kem_dags5_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
