#ifndef pqcrypto_kem_kindi256522_H
#define pqcrypto_kem_kindi256522_H

#define pqcrypto_kem_kindi256522_keypair pqcrypto_kem_kindi256522_impl_keypair
#define pqcrypto_kem_kindi256522_enc pqcrypto_kem_kindi256522_impl_enc
#define pqcrypto_kem_kindi256522_dec pqcrypto_kem_kindi256522_impl_dec
#define pqcrypto_kem_kindi256522_PUBLICKEYBYTES pqcrypto_kem_kindi256522_impl_PUBLICKEYBYTES
#define pqcrypto_kem_kindi256522_SECRETKEYBYTES pqcrypto_kem_kindi256522_impl_SECRETKEYBYTES
#define pqcrypto_kem_kindi256522_BYTES pqcrypto_kem_kindi256522_impl_BYTES
#define pqcrypto_kem_kindi256522_CIPHERTEXTBYTES pqcrypto_kem_kindi256522_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_kindi256522_implementation pqcrypto_kem_kindi256522_impl_implementation
#define pqcrypto_kem_kindi256522_version pqcrypto_kem_kindi256522_impl_version
#define pqcrypto_kem_kindi256522_compiler pqcrypto_kem_kindi256522_impl_compiler

#define pqcrypto_kem_kindi256522_impl_PUBLICKEYBYTES 1984
#define pqcrypto_kem_kindi256522_impl_SECRETKEYBYTES 2304
#define pqcrypto_kem_kindi256522_impl_BYTES 64
#define pqcrypto_kem_kindi256522_impl_CIPHERTEXTBYTES 2752

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_kindi256522_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kindi256522_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_kindi256522_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256522_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256522_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_kindi256522_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
