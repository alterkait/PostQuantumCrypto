#ifndef crypto_sign_picnicl1ur_H
#define crypto_sign_picnicl1ur_H

#define crypto_sign_picnicl1ur pqcrypto_sign_picnicl1ur_impl
#define crypto_sign_picnicl1ur_open pqcrypto_sign_picnicl1ur_impl_open
#define crypto_sign_picnicl1ur_keypair pqcrypto_sign_picnicl1ur_impl_keypair
#define crypto_sign_picnicl1ur_BYTES pqcrypto_sign_picnicl1ur_impl_BYTES
#define crypto_sign_picnicl1ur_PUBLICKEYBYTES pqcrypto_sign_picnicl1ur_impl_PUBLICKEYBYTES
#define crypto_sign_picnicl1ur_SECRETKEYBYTES pqcrypto_sign_picnicl1ur_impl_SECRETKEYBYTES
#define crypto_sign_picnicl1ur_DETERMINISTIC pqcrypto_sign_picnicl1ur_impl_DETERMINISTIC
#define crypto_sign_picnicl1ur_implementation pqcrypto_sign_picnicl1ur_impl_implementation
#define crypto_sign_picnicl1ur_version pqcrypto_sign_picnicl1ur_impl_version
#define crypto_sign_picnicl1ur_compiler pqcrypto_sign_picnicl1ur_impl_compiler

#define pqcrypto_sign_picnicl1ur_impl_BYTES 53933
#define pqcrypto_sign_picnicl1ur_impl_PUBLICKEYBYTES 33
#define pqcrypto_sign_picnicl1ur_impl_SECRETKEYBYTES 49
#define pqcrypto_sign_picnicl1ur_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_picnicl1ur(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_picnicl1ur_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_picnicl1ur_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_picnicl1ur(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_picnicl1ur_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_picnicl1ur_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1ur_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1ur_version[] __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1ur_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
