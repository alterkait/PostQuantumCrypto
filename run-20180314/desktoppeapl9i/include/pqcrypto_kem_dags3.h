#ifndef pqcrypto_kem_dags3_H
#define pqcrypto_kem_dags3_H

#define pqcrypto_kem_dags3_keypair pqcrypto_kem_dags3_impl_keypair
#define pqcrypto_kem_dags3_enc pqcrypto_kem_dags3_impl_enc
#define pqcrypto_kem_dags3_dec pqcrypto_kem_dags3_impl_dec
#define pqcrypto_kem_dags3_PUBLICKEYBYTES pqcrypto_kem_dags3_impl_PUBLICKEYBYTES
#define pqcrypto_kem_dags3_SECRETKEYBYTES pqcrypto_kem_dags3_impl_SECRETKEYBYTES
#define pqcrypto_kem_dags3_BYTES pqcrypto_kem_dags3_impl_BYTES
#define pqcrypto_kem_dags3_CIPHERTEXTBYTES pqcrypto_kem_dags3_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_dags3_implementation pqcrypto_kem_dags3_impl_implementation
#define pqcrypto_kem_dags3_version pqcrypto_kem_dags3_impl_version
#define pqcrypto_kem_dags3_compiler pqcrypto_kem_dags3_impl_compiler

#define pqcrypto_kem_dags3_impl_PUBLICKEYBYTES 11616
#define pqcrypto_kem_dags3_impl_SECRETKEYBYTES 2973704
#define pqcrypto_kem_dags3_impl_BYTES 64
#define pqcrypto_kem_dags3_impl_CIPHERTEXTBYTES 2144

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_dags3_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_dags3_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_dags3_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_dags3_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_dags3_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_dags3_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
