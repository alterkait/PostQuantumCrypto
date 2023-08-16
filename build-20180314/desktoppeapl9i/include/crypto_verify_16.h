#ifndef crypto_verify_16_H
#define crypto_verify_16_H

#define crypto_verify_16 pqcrypto_verify_16_impl
#define crypto_verify_16_BYTES pqcrypto_verify_16_impl_BYTES
#define crypto_verify_16_implementation pqcrypto_verify_16_impl_implementation
#define crypto_verify_16_version pqcrypto_verify_16_impl_version
#define crypto_verify_16_compiler pqcrypto_verify_16_impl_compiler

#define pqcrypto_verify_16_impl_BYTES 16

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_verify_16(const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_verify_16_implementation[] __attribute__((visibility("default")));
extern const char crypto_verify_16_version[] __attribute__((visibility("default")));
extern const char crypto_verify_16_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
