#ifndef pqcrypto_sign_luov8117404_H
#define pqcrypto_sign_luov8117404_H

#define pqcrypto_sign_luov8117404 pqcrypto_sign_luov8117404_impl
#define pqcrypto_sign_luov8117404_open pqcrypto_sign_luov8117404_impl_open
#define pqcrypto_sign_luov8117404_keypair pqcrypto_sign_luov8117404_impl_keypair
#define pqcrypto_sign_luov8117404_BYTES pqcrypto_sign_luov8117404_impl_BYTES
#define pqcrypto_sign_luov8117404_PUBLICKEYBYTES pqcrypto_sign_luov8117404_impl_PUBLICKEYBYTES
#define pqcrypto_sign_luov8117404_SECRETKEYBYTES pqcrypto_sign_luov8117404_impl_SECRETKEYBYTES
#define pqcrypto_sign_luov8117404_DETERMINISTIC pqcrypto_sign_luov8117404_impl_DETERMINISTIC
#define pqcrypto_sign_luov8117404_implementation pqcrypto_sign_luov8117404_impl_implementation
#define pqcrypto_sign_luov8117404_version pqcrypto_sign_luov8117404_impl_version
#define pqcrypto_sign_luov8117404_compiler pqcrypto_sign_luov8117404_impl_compiler

#define pqcrypto_sign_luov8117404_impl_BYTES 521
#define pqcrypto_sign_luov8117404_impl_PUBLICKEYBYTES 100989
#define pqcrypto_sign_luov8117404_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov8117404_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_luov8117404(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov8117404_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_luov8117404_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_luov8117404(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov8117404_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_luov8117404_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8117404_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8117404_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_luov8117404_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
