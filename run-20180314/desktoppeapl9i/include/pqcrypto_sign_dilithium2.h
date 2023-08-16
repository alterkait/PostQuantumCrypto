#ifndef pqcrypto_sign_dilithium2_H
#define pqcrypto_sign_dilithium2_H

#define pqcrypto_sign_dilithium2 pqcrypto_sign_dilithium2_impl
#define pqcrypto_sign_dilithium2_open pqcrypto_sign_dilithium2_impl_open
#define pqcrypto_sign_dilithium2_keypair pqcrypto_sign_dilithium2_impl_keypair
#define pqcrypto_sign_dilithium2_BYTES pqcrypto_sign_dilithium2_impl_BYTES
#define pqcrypto_sign_dilithium2_PUBLICKEYBYTES pqcrypto_sign_dilithium2_impl_PUBLICKEYBYTES
#define pqcrypto_sign_dilithium2_SECRETKEYBYTES pqcrypto_sign_dilithium2_impl_SECRETKEYBYTES
#define pqcrypto_sign_dilithium2_DETERMINISTIC pqcrypto_sign_dilithium2_impl_DETERMINISTIC
#define pqcrypto_sign_dilithium2_implementation pqcrypto_sign_dilithium2_impl_implementation
#define pqcrypto_sign_dilithium2_version pqcrypto_sign_dilithium2_impl_version
#define pqcrypto_sign_dilithium2_compiler pqcrypto_sign_dilithium2_impl_compiler

#define pqcrypto_sign_dilithium2_impl_BYTES 2044
#define pqcrypto_sign_dilithium2_impl_PUBLICKEYBYTES 1184
#define pqcrypto_sign_dilithium2_impl_SECRETKEYBYTES 2800
#define pqcrypto_sign_dilithium2_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_dilithium2(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_dilithium2_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_dilithium2_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_dilithium2(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_dilithium2_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_dilithium2_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium2_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium2_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_dilithium2_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
