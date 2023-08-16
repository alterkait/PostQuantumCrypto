#ifndef pqcrypto_kem_kindi256342_H
#define pqcrypto_kem_kindi256342_H

#define pqcrypto_kem_kindi256342_keypair pqcrypto_kem_kindi256342_impl_keypair
#define pqcrypto_kem_kindi256342_enc pqcrypto_kem_kindi256342_impl_enc
#define pqcrypto_kem_kindi256342_dec pqcrypto_kem_kindi256342_impl_dec
#define pqcrypto_kem_kindi256342_PUBLICKEYBYTES pqcrypto_kem_kindi256342_impl_PUBLICKEYBYTES
#define pqcrypto_kem_kindi256342_SECRETKEYBYTES pqcrypto_kem_kindi256342_impl_SECRETKEYBYTES
#define pqcrypto_kem_kindi256342_BYTES pqcrypto_kem_kindi256342_impl_BYTES
#define pqcrypto_kem_kindi256342_CIPHERTEXTBYTES pqcrypto_kem_kindi256342_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_kindi256342_implementation pqcrypto_kem_kindi256342_impl_implementation
#define pqcrypto_kem_kindi256342_version pqcrypto_kem_kindi256342_impl_version
#define pqcrypto_kem_kindi256342_compiler pqcrypto_kem_kindi256342_impl_compiler

#define pqcrypto_kem_kindi256342_impl_PUBLICKEYBYTES 1184
#define pqcrypto_kem_kindi256342_impl_SECRETKEYBYTES 1472
#define pqcrypto_kem_kindi256342_impl_BYTES 32
#define pqcrypto_kem_kindi256342_impl_CIPHERTEXTBYTES 1824

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_kindi256342_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kindi256342_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kindi256342_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256342_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256342_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256342_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
