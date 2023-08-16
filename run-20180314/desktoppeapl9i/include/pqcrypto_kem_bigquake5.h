#ifndef pqcrypto_kem_bigquake5_H
#define pqcrypto_kem_bigquake5_H

#define pqcrypto_kem_bigquake5_keypair pqcrypto_kem_bigquake5_impl_keypair
#define pqcrypto_kem_bigquake5_enc pqcrypto_kem_bigquake5_impl_enc
#define pqcrypto_kem_bigquake5_dec pqcrypto_kem_bigquake5_impl_dec
#define pqcrypto_kem_bigquake5_PUBLICKEYBYTES pqcrypto_kem_bigquake5_impl_PUBLICKEYBYTES
#define pqcrypto_kem_bigquake5_SECRETKEYBYTES pqcrypto_kem_bigquake5_impl_SECRETKEYBYTES
#define pqcrypto_kem_bigquake5_BYTES pqcrypto_kem_bigquake5_impl_BYTES
#define pqcrypto_kem_bigquake5_CIPHERTEXTBYTES pqcrypto_kem_bigquake5_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_bigquake5_implementation pqcrypto_kem_bigquake5_impl_implementation
#define pqcrypto_kem_bigquake5_version pqcrypto_kem_bigquake5_impl_version
#define pqcrypto_kem_bigquake5_compiler pqcrypto_kem_bigquake5_impl_compiler

#define pqcrypto_kem_bigquake5_impl_PUBLICKEYBYTES 149800
#define pqcrypto_kem_bigquake5_impl_SECRETKEYBYTES 41804
#define pqcrypto_kem_bigquake5_impl_BYTES 32
#define pqcrypto_kem_bigquake5_impl_CIPHERTEXTBYTES 492

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_bigquake5_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_bigquake5_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_bigquake5_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_bigquake5_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_bigquake5_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_bigquake5_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
