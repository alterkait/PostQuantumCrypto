#ifndef pqcrypto_verify_32_H
#define pqcrypto_verify_32_H

#define pqcrypto_verify_32 pqcrypto_verify_32_impl
#define pqcrypto_verify_32_BYTES pqcrypto_verify_32_impl_BYTES
#define pqcrypto_verify_32_implementation pqcrypto_verify_32_impl_implementation
#define pqcrypto_verify_32_version pqcrypto_verify_32_impl_version
#define pqcrypto_verify_32_compiler pqcrypto_verify_32_impl_compiler

#define pqcrypto_verify_32_impl_BYTES 32

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_verify_32(const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_verify_32_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_verify_32_version[] __attribute__((visibility("default")));
extern const char pqcrypto_verify_32_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
