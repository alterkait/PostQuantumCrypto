#ifndef pqcrypto_sign_gui312_H
#define pqcrypto_sign_gui312_H

#define pqcrypto_sign_gui312 pqcrypto_sign_gui312_impl
#define pqcrypto_sign_gui312_open pqcrypto_sign_gui312_impl_open
#define pqcrypto_sign_gui312_keypair pqcrypto_sign_gui312_impl_keypair
#define pqcrypto_sign_gui312_BYTES pqcrypto_sign_gui312_impl_BYTES
#define pqcrypto_sign_gui312_PUBLICKEYBYTES pqcrypto_sign_gui312_impl_PUBLICKEYBYTES
#define pqcrypto_sign_gui312_SECRETKEYBYTES pqcrypto_sign_gui312_impl_SECRETKEYBYTES
#define pqcrypto_sign_gui312_DETERMINISTIC pqcrypto_sign_gui312_impl_DETERMINISTIC
#define pqcrypto_sign_gui312_implementation pqcrypto_sign_gui312_impl_implementation
#define pqcrypto_sign_gui312_version pqcrypto_sign_gui312_impl_version
#define pqcrypto_sign_gui312_compiler pqcrypto_sign_gui312_impl_compiler

#define pqcrypto_sign_gui312_impl_BYTES 63
#define pqcrypto_sign_gui312_impl_PUBLICKEYBYTES 1990045
#define pqcrypto_sign_gui312_impl_SECRETKEYBYTES 41755

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_gui312(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui312_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_gui312_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_gui312(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui312_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_gui312_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui312_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui312_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_gui312_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
