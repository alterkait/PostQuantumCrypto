#ifndef pqcrypto_scalarmult_x25519notpq_H
#define pqcrypto_scalarmult_x25519notpq_H

#define pqcrypto_scalarmult_x25519notpq pqcrypto_scalarmult_x25519notpq_impl
#define pqcrypto_scalarmult_x25519notpq_base pqcrypto_scalarmult_x25519notpq_impl_base
#define pqcrypto_scalarmult_x25519notpq_BYTES pqcrypto_scalarmult_x25519notpq_impl_BYTES
#define pqcrypto_scalarmult_x25519notpq_SCALARBYTES pqcrypto_scalarmult_x25519notpq_impl_SCALARBYTES
#define pqcrypto_scalarmult_x25519notpq_implementation pqcrypto_scalarmult_x25519notpq_impl_implementation
#define pqcrypto_scalarmult_x25519notpq_version pqcrypto_scalarmult_x25519notpq_impl_version
#define pqcrypto_scalarmult_x25519notpq_compiler pqcrypto_scalarmult_x25519notpq_impl_compiler

#define pqcrypto_scalarmult_x25519notpq_impl_BYTES 32
#define pqcrypto_scalarmult_x25519notpq_impl_SCALARBYTES 32

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_scalarmult_x25519notpq(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_scalarmult_x25519notpq_base(const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_scalarmult_x25519notpq(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_scalarmult_x25519notpq_base(unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_scalarmult_x25519notpq_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_scalarmult_x25519notpq_version[] __attribute__((visibility("default")));
extern const char pqcrypto_scalarmult_x25519notpq_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
