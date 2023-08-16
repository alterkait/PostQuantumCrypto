#ifndef pqcrypto_sign_mqdss64_H
#define pqcrypto_sign_mqdss64_H

#define pqcrypto_sign_mqdss64 pqcrypto_sign_mqdss64_impl
#define pqcrypto_sign_mqdss64_open pqcrypto_sign_mqdss64_impl_open
#define pqcrypto_sign_mqdss64_keypair pqcrypto_sign_mqdss64_impl_keypair
#define pqcrypto_sign_mqdss64_BYTES pqcrypto_sign_mqdss64_impl_BYTES
#define pqcrypto_sign_mqdss64_PUBLICKEYBYTES pqcrypto_sign_mqdss64_impl_PUBLICKEYBYTES
#define pqcrypto_sign_mqdss64_SECRETKEYBYTES pqcrypto_sign_mqdss64_impl_SECRETKEYBYTES
#define pqcrypto_sign_mqdss64_DETERMINISTIC pqcrypto_sign_mqdss64_impl_DETERMINISTIC
#define pqcrypto_sign_mqdss64_implementation pqcrypto_sign_mqdss64_impl_implementation
#define pqcrypto_sign_mqdss64_version pqcrypto_sign_mqdss64_impl_version
#define pqcrypto_sign_mqdss64_compiler pqcrypto_sign_mqdss64_impl_compiler

#define pqcrypto_sign_mqdss64_impl_BYTES 67800
#define pqcrypto_sign_mqdss64_impl_PUBLICKEYBYTES 88
#define pqcrypto_sign_mqdss64_impl_SECRETKEYBYTES 48
#define pqcrypto_sign_mqdss64_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_mqdss64(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_mqdss64_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_mqdss64_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_mqdss64(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_mqdss64_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_mqdss64_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss64_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss64_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss64_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
