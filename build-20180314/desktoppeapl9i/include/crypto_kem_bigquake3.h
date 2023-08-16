#ifndef crypto_kem_bigquake3_H
#define crypto_kem_bigquake3_H

#define crypto_kem_bigquake3_keypair pqcrypto_kem_bigquake3_impl_keypair
#define crypto_kem_bigquake3_enc pqcrypto_kem_bigquake3_impl_enc
#define crypto_kem_bigquake3_dec pqcrypto_kem_bigquake3_impl_dec
#define crypto_kem_bigquake3_PUBLICKEYBYTES pqcrypto_kem_bigquake3_impl_PUBLICKEYBYTES
#define crypto_kem_bigquake3_SECRETKEYBYTES pqcrypto_kem_bigquake3_impl_SECRETKEYBYTES
#define crypto_kem_bigquake3_BYTES pqcrypto_kem_bigquake3_impl_BYTES
#define crypto_kem_bigquake3_CIPHERTEXTBYTES pqcrypto_kem_bigquake3_impl_CIPHERTEXTBYTES
#define crypto_kem_bigquake3_implementation pqcrypto_kem_bigquake3_impl_implementation
#define crypto_kem_bigquake3_version pqcrypto_kem_bigquake3_impl_version
#define crypto_kem_bigquake3_compiler pqcrypto_kem_bigquake3_impl_compiler

#define pqcrypto_kem_bigquake3_impl_PUBLICKEYBYTES 84132
#define pqcrypto_kem_bigquake3_impl_SECRETKEYBYTES 30860
#define pqcrypto_kem_bigquake3_impl_BYTES 32
#define pqcrypto_kem_bigquake3_impl_CIPHERTEXTBYTES 406

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_bigquake3_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_bigquake3_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_bigquake3_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_bigquake3_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_bigquake3_version[] __attribute__((visibility("default")));
extern const char crypto_kem_bigquake3_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
