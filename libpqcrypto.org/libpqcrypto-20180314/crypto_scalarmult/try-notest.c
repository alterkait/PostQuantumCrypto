/*
 * crypto_scalarmult/try-notest.c version 20180223
 * D. J. Bernstein
 * Public domain.
 * Auto-generated by trygen-notest.py; do not edit.
 */

#include "crypto_scalarmult.h"
#include "try.h"
#include "randombytes.h"

const char *primitiveimplementation = crypto_scalarmult_implementation;

#ifdef SMALL
#define LOOPS 64
#else
#define LOOPS 512
#endif

static unsigned char *a;
static unsigned char *b;
static unsigned char *c;
static unsigned char *d;
static unsigned char *e;
static unsigned char *f;
static unsigned char *a2;
static unsigned char *b2;
static unsigned char *c2;
static unsigned char *d2;
static unsigned char *e2;
static unsigned char *f2;
#define alen crypto_scalarmult_SCALARBYTES
#define blen crypto_scalarmult_SCALARBYTES
#define clen crypto_scalarmult_BYTES
#define dlen crypto_scalarmult_BYTES
#define elen crypto_scalarmult_BYTES
#define flen crypto_scalarmult_BYTES

void preallocate(void)
{
}

void allocate(void)
{
  unsigned long long alloclen = 0;
  if (alloclen < crypto_scalarmult_SCALARBYTES) alloclen = crypto_scalarmult_SCALARBYTES;
  if (alloclen < crypto_scalarmult_SCALARBYTES) alloclen = crypto_scalarmult_SCALARBYTES;
  if (alloclen < crypto_scalarmult_BYTES) alloclen = crypto_scalarmult_BYTES;
  if (alloclen < crypto_scalarmult_BYTES) alloclen = crypto_scalarmult_BYTES;
  if (alloclen < crypto_scalarmult_BYTES) alloclen = crypto_scalarmult_BYTES;
  if (alloclen < crypto_scalarmult_BYTES) alloclen = crypto_scalarmult_BYTES;
  a = alignedcalloc(alloclen);
  b = alignedcalloc(alloclen);
  c = alignedcalloc(alloclen);
  d = alignedcalloc(alloclen);
  e = alignedcalloc(alloclen);
  f = alignedcalloc(alloclen);
  a2 = alignedcalloc(alloclen);
  b2 = alignedcalloc(alloclen);
  c2 = alignedcalloc(alloclen);
  d2 = alignedcalloc(alloclen);
  e2 = alignedcalloc(alloclen);
  f2 = alignedcalloc(alloclen);
}

void predoit(void)
{
  randombytes(a,alen);
  randombytes(b,blen);
}

void doit(void)
{
  crypto_scalarmult_base(c,a);
  crypto_scalarmult_base(d,b);
  crypto_scalarmult(e,a,d);
  crypto_scalarmult(f,b,c);
}
