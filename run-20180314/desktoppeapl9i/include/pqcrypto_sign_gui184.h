#ifndef pqcrypto_sign_gui184_H
#define pqcrypto_sign_gui184_H

#define pqcrypto_sign_gui184 pqcrypto_sign_gui184_impl
#define pqcrypto_sign_gui184_open pqcrypto_sign_gui184_impl_open
#define pqcrypto_sign_gui184_keypair pqcrypto_sign_gui184_impl_keypair
#define pqcrypto_sign_gui184_BYTES pqcrypto_sign_gui184_impl_BYTES
#define pqcrypto_sign_gui184_PUBLICKEYBYTES pqcrypto_sign_gui184_impl_PUBLICKEYBYTES
#define pqcrypto_sign_gui184_SECRETKEYBYTES pqcrypto_sign_gui184_impl_SECRETKEYBYTES
#define pqcrypto_sign_gui184_DETERMINISTIC pqcrypto_sign_gui184_impl_DETERMINISTIC
#define pqcrypto_sign_gui184_implementation pqcrypto_sign_gui184_impl_implementation
#define pqcrypto_sign_gui184_version pqcrypto_sign_gui184_impl_version
#define pqcrypto_sign_gui184_compiler pqcrypto_sign_gui184_impl_compiler

#define pqcrypto_sign_gui184_impl_BYTES 45
#define pqcrypto_sign_gui184_impl_PUBLICKEYBYTES 422122
#define pqcrypto_sign_gui184_impl_SECRETKEYBYTES 14985

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_gui184(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui184_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui184_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_gui184(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui184_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui184_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui184_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui184_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui184_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
