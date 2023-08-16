#ifndef pqcrypto_sign_rainbow5c_H
#define pqcrypto_sign_rainbow5c_H

#define pqcrypto_sign_rainbow5c pqcrypto_sign_rainbow5c_impl
#define pqcrypto_sign_rainbow5c_open pqcrypto_sign_rainbow5c_impl_open
#define pqcrypto_sign_rainbow5c_keypair pqcrypto_sign_rainbow5c_impl_keypair
#define pqcrypto_sign_rainbow5c_BYTES pqcrypto_sign_rainbow5c_impl_BYTES
#define pqcrypto_sign_rainbow5c_PUBLICKEYBYTES pqcrypto_sign_rainbow5c_impl_PUBLICKEYBYTES
#define pqcrypto_sign_rainbow5c_SECRETKEYBYTES pqcrypto_sign_rainbow5c_impl_SECRETKEYBYTES
#define pqcrypto_sign_rainbow5c_DETERMINISTIC pqcrypto_sign_rainbow5c_impl_DETERMINISTIC
#define pqcrypto_sign_rainbow5c_implementation pqcrypto_sign_rainbow5c_impl_implementation
#define pqcrypto_sign_rainbow5c_version pqcrypto_sign_rainbow5c_impl_version
#define pqcrypto_sign_rainbow5c_compiler pqcrypto_sign_rainbow5c_impl_compiler

#define pqcrypto_sign_rainbow5c_impl_BYTES 204
#define pqcrypto_sign_rainbow5c_impl_PUBLICKEYBYTES 1723681
#define pqcrypto_sign_rainbow5c_impl_SECRETKEYBYTES 1274317

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_rainbow5c(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow5c_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_rainbow5c_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_rainbow5c(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow5c_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_rainbow5c_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow5c_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow5c_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_rainbow5c_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
