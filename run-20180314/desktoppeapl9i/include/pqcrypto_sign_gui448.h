#ifndef pqcrypto_sign_gui448_H
#define pqcrypto_sign_gui448_H

#define pqcrypto_sign_gui448 pqcrypto_sign_gui448_impl
#define pqcrypto_sign_gui448_open pqcrypto_sign_gui448_impl_open
#define pqcrypto_sign_gui448_keypair pqcrypto_sign_gui448_impl_keypair
#define pqcrypto_sign_gui448_BYTES pqcrypto_sign_gui448_impl_BYTES
#define pqcrypto_sign_gui448_PUBLICKEYBYTES pqcrypto_sign_gui448_impl_PUBLICKEYBYTES
#define pqcrypto_sign_gui448_SECRETKEYBYTES pqcrypto_sign_gui448_impl_SECRETKEYBYTES
#define pqcrypto_sign_gui448_DETERMINISTIC pqcrypto_sign_gui448_impl_DETERMINISTIC
#define pqcrypto_sign_gui448_implementation pqcrypto_sign_gui448_impl_implementation
#define pqcrypto_sign_gui448_version pqcrypto_sign_gui448_impl_version
#define pqcrypto_sign_gui448_compiler pqcrypto_sign_gui448_impl_compiler

#define pqcrypto_sign_gui448_impl_BYTES 83
#define pqcrypto_sign_gui448_impl_PUBLICKEYBYTES 5903405
#define pqcrypto_sign_gui448_impl_SECRETKEYBYTES 94757

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_gui448(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui448_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui448_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_gui448(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui448_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui448_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui448_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui448_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui448_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
