#ifndef pqcrypto_sign_mqdss48_H
#define pqcrypto_sign_mqdss48_H

#define pqcrypto_sign_mqdss48 pqcrypto_sign_mqdss48_impl
#define pqcrypto_sign_mqdss48_open pqcrypto_sign_mqdss48_impl_open
#define pqcrypto_sign_mqdss48_keypair pqcrypto_sign_mqdss48_impl_keypair
#define pqcrypto_sign_mqdss48_BYTES pqcrypto_sign_mqdss48_impl_BYTES
#define pqcrypto_sign_mqdss48_PUBLICKEYBYTES pqcrypto_sign_mqdss48_impl_PUBLICKEYBYTES
#define pqcrypto_sign_mqdss48_SECRETKEYBYTES pqcrypto_sign_mqdss48_impl_SECRETKEYBYTES
#define pqcrypto_sign_mqdss48_DETERMINISTIC pqcrypto_sign_mqdss48_impl_DETERMINISTIC
#define pqcrypto_sign_mqdss48_implementation pqcrypto_sign_mqdss48_impl_implementation
#define pqcrypto_sign_mqdss48_version pqcrypto_sign_mqdss48_impl_version
#define pqcrypto_sign_mqdss48_compiler pqcrypto_sign_mqdss48_impl_compiler

#define pqcrypto_sign_mqdss48_impl_BYTES 32882
#define pqcrypto_sign_mqdss48_impl_PUBLICKEYBYTES 62
#define pqcrypto_sign_mqdss48_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_mqdss48_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_mqdss48(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_mqdss48_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_mqdss48_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_mqdss48(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_mqdss48_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_mqdss48_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss48_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss48_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_mqdss48_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
