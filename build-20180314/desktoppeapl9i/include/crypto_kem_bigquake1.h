#ifndef crypto_kem_bigquake1_H
#define crypto_kem_bigquake1_H

#define crypto_kem_bigquake1_keypair pqcrypto_kem_bigquake1_impl_keypair
#define crypto_kem_bigquake1_enc pqcrypto_kem_bigquake1_impl_enc
#define crypto_kem_bigquake1_dec pqcrypto_kem_bigquake1_impl_dec
#define crypto_kem_bigquake1_PUBLICKEYBYTES pqcrypto_kem_bigquake1_impl_PUBLICKEYBYTES
#define crypto_kem_bigquake1_SECRETKEYBYTES pqcrypto_kem_bigquake1_impl_SECRETKEYBYTES
#define crypto_kem_bigquake1_BYTES pqcrypto_kem_bigquake1_impl_BYTES
#define crypto_kem_bigquake1_CIPHERTEXTBYTES pqcrypto_kem_bigquake1_impl_CIPHERTEXTBYTES
#define crypto_kem_bigquake1_implementation pqcrypto_kem_bigquake1_impl_implementation
#define crypto_kem_bigquake1_version pqcrypto_kem_bigquake1_impl_version
#define crypto_kem_bigquake1_compiler pqcrypto_kem_bigquake1_impl_compiler

#define pqcrypto_kem_bigquake1_impl_PUBLICKEYBYTES 25482
#define pqcrypto_kem_bigquake1_impl_SECRETKEYBYTES 14772
#define pqcrypto_kem_bigquake1_impl_BYTES 32
#define pqcrypto_kem_bigquake1_impl_CIPHERTEXTBYTES 201

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_bigquake1_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_bigquake1_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_bigquake1_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_bigquake1_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_bigquake1_version[] __attribute__((visibility("default")));
extern const char crypto_kem_bigquake1_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
