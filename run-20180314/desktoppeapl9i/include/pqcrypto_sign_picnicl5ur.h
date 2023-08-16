#ifndef pqcrypto_sign_picnicl5ur_H
#define pqcrypto_sign_picnicl5ur_H

#define pqcrypto_sign_picnicl5ur pqcrypto_sign_picnicl5ur_impl
#define pqcrypto_sign_picnicl5ur_open pqcrypto_sign_picnicl5ur_impl_open
#define pqcrypto_sign_picnicl5ur_keypair pqcrypto_sign_picnicl5ur_impl_keypair
#define pqcrypto_sign_picnicl5ur_BYTES pqcrypto_sign_picnicl5ur_impl_BYTES
#define pqcrypto_sign_picnicl5ur_PUBLICKEYBYTES pqcrypto_sign_picnicl5ur_impl_PUBLICKEYBYTES
#define pqcrypto_sign_picnicl5ur_SECRETKEYBYTES pqcrypto_sign_picnicl5ur_impl_SECRETKEYBYTES
#define pqcrypto_sign_picnicl5ur_DETERMINISTIC pqcrypto_sign_picnicl5ur_impl_DETERMINISTIC
#define pqcrypto_sign_picnicl5ur_implementation pqcrypto_sign_picnicl5ur_impl_implementation
#define pqcrypto_sign_picnicl5ur_version pqcrypto_sign_picnicl5ur_impl_version
#define pqcrypto_sign_picnicl5ur_compiler pqcrypto_sign_picnicl5ur_impl_compiler

#define pqcrypto_sign_picnicl5ur_impl_BYTES 209478
#define pqcrypto_sign_picnicl5ur_impl_PUBLICKEYBYTES 65
#define pqcrypto_sign_picnicl5ur_impl_SECRETKEYBYTES 97
#define pqcrypto_sign_picnicl5ur_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_picnicl5ur(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_picnicl5ur_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_picnicl5ur_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_picnicl5ur(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_picnicl5ur_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_picnicl5ur_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5ur_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5ur_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5ur_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
