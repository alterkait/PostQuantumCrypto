#ifndef pqcrypto_sign_luov8086399_H
#define pqcrypto_sign_luov8086399_H

#define pqcrypto_sign_luov8086399 pqcrypto_sign_luov8086399_impl
#define pqcrypto_sign_luov8086399_open pqcrypto_sign_luov8086399_impl_open
#define pqcrypto_sign_luov8086399_keypair pqcrypto_sign_luov8086399_impl_keypair
#define pqcrypto_sign_luov8086399_BYTES pqcrypto_sign_luov8086399_impl_BYTES
#define pqcrypto_sign_luov8086399_PUBLICKEYBYTES pqcrypto_sign_luov8086399_impl_PUBLICKEYBYTES
#define pqcrypto_sign_luov8086399_SECRETKEYBYTES pqcrypto_sign_luov8086399_impl_SECRETKEYBYTES
#define pqcrypto_sign_luov8086399_DETERMINISTIC pqcrypto_sign_luov8086399_impl_DETERMINISTIC
#define pqcrypto_sign_luov8086399_implementation pqcrypto_sign_luov8086399_impl_implementation
#define pqcrypto_sign_luov8086399_version pqcrypto_sign_luov8086399_impl_version
#define pqcrypto_sign_luov8086399_compiler pqcrypto_sign_luov8086399_impl_compiler

#define pqcrypto_sign_luov8086399_impl_BYTES 4850
#define pqcrypto_sign_luov8086399_impl_PUBLICKEYBYTES 40248
#define pqcrypto_sign_luov8086399_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov8086399_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_luov8086399(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov8086399_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov8086399_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_luov8086399(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov8086399_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov8086399_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8086399_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8086399_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8086399_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
