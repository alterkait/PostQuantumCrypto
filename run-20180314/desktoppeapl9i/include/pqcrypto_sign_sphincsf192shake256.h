#ifndef pqcrypto_sign_sphincsf192shake256_H
#define pqcrypto_sign_sphincsf192shake256_H

#define pqcrypto_sign_sphincsf192shake256 pqcrypto_sign_sphincsf192shake256_impl
#define pqcrypto_sign_sphincsf192shake256_open pqcrypto_sign_sphincsf192shake256_impl_open
#define pqcrypto_sign_sphincsf192shake256_keypair pqcrypto_sign_sphincsf192shake256_impl_keypair
#define pqcrypto_sign_sphincsf192shake256_BYTES pqcrypto_sign_sphincsf192shake256_impl_BYTES
#define pqcrypto_sign_sphincsf192shake256_PUBLICKEYBYTES pqcrypto_sign_sphincsf192shake256_impl_PUBLICKEYBYTES
#define pqcrypto_sign_sphincsf192shake256_SECRETKEYBYTES pqcrypto_sign_sphincsf192shake256_impl_SECRETKEYBYTES
#define pqcrypto_sign_sphincsf192shake256_DETERMINISTIC pqcrypto_sign_sphincsf192shake256_impl_DETERMINISTIC
#define pqcrypto_sign_sphincsf192shake256_implementation pqcrypto_sign_sphincsf192shake256_impl_implementation
#define pqcrypto_sign_sphincsf192shake256_version pqcrypto_sign_sphincsf192shake256_impl_version
#define pqcrypto_sign_sphincsf192shake256_compiler pqcrypto_sign_sphincsf192shake256_impl_compiler

#define pqcrypto_sign_sphincsf192shake256_impl_BYTES 35664
#define pqcrypto_sign_sphincsf192shake256_impl_PUBLICKEYBYTES 48
#define pqcrypto_sign_sphincsf192shake256_impl_SECRETKEYBYTES 96

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_sphincsf192shake256(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincsf192shake256_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincsf192shake256_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_sphincsf192shake256(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincsf192shake256_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincsf192shake256_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf192shake256_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf192shake256_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf192shake256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
