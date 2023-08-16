#ifndef pqcrypto_sign_luov6468330_H
#define pqcrypto_sign_luov6468330_H

#define pqcrypto_sign_luov6468330 pqcrypto_sign_luov6468330_impl
#define pqcrypto_sign_luov6468330_open pqcrypto_sign_luov6468330_impl_open
#define pqcrypto_sign_luov6468330_keypair pqcrypto_sign_luov6468330_impl_keypair
#define pqcrypto_sign_luov6468330_BYTES pqcrypto_sign_luov6468330_impl_BYTES
#define pqcrypto_sign_luov6468330_PUBLICKEYBYTES pqcrypto_sign_luov6468330_impl_PUBLICKEYBYTES
#define pqcrypto_sign_luov6468330_SECRETKEYBYTES pqcrypto_sign_luov6468330_impl_SECRETKEYBYTES
#define pqcrypto_sign_luov6468330_DETERMINISTIC pqcrypto_sign_luov6468330_impl_DETERMINISTIC
#define pqcrypto_sign_luov6468330_implementation pqcrypto_sign_luov6468330_impl_implementation
#define pqcrypto_sign_luov6468330_version pqcrypto_sign_luov6468330_impl_version
#define pqcrypto_sign_luov6468330_compiler pqcrypto_sign_luov6468330_impl_compiler

#define pqcrypto_sign_luov6468330_impl_BYTES 3184
#define pqcrypto_sign_luov6468330_impl_PUBLICKEYBYTES 19973
#define pqcrypto_sign_luov6468330_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov6468330_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_luov6468330(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov6468330_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov6468330_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_luov6468330(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov6468330_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov6468330_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov6468330_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov6468330_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov6468330_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
