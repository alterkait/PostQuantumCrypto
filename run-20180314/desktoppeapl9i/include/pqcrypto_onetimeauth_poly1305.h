#ifndef pqcrypto_onetimeauth_poly1305_H
#define pqcrypto_onetimeauth_poly1305_H

#define pqcrypto_onetimeauth_poly1305 pqcrypto_onetimeauth_poly1305_impl
#define pqcrypto_onetimeauth_poly1305_verify pqcrypto_onetimeauth_poly1305_impl_verify
#define pqcrypto_onetimeauth_poly1305_BYTES pqcrypto_onetimeauth_poly1305_impl_BYTES
#define pqcrypto_onetimeauth_poly1305_KEYBYTES pqcrypto_onetimeauth_poly1305_impl_KEYBYTES
#define pqcrypto_onetimeauth_poly1305_implementation pqcrypto_onetimeauth_poly1305_impl_implementation
#define pqcrypto_onetimeauth_poly1305_version pqcrypto_onetimeauth_poly1305_impl_version
#define pqcrypto_onetimeauth_poly1305_compiler pqcrypto_onetimeauth_poly1305_impl_compiler

#define pqcrypto_onetimeauth_poly1305_impl_BYTES 16
#define pqcrypto_onetimeauth_poly1305_impl_KEYBYTES 32

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_onetimeauth_poly1305(const std::string &,const std::string &) __attribute__((visibility("default")));
extern void pqcrypto_onetimeauth_poly1305_verify(const std::string &,const std::string &,const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_onetimeauth_poly1305(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_onetimeauth_poly1305_verify(const unsigned char *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_onetimeauth_poly1305_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_onetimeauth_poly1305_version[] __attribute__((visibility("default")));
extern const char pqcrypto_onetimeauth_poly1305_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
