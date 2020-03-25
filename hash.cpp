#include "hash.h"

size_t hash(size_t x)
{
  size_t w = 32;
  size_t p = 13;
  size_t a = 5754853343;
  size_t ax = a*x;
  size_t one = 1;

  size_t axModW = ax & ((one<<w) - one);
  size_t hash = axModW >> (w-p);
  return hash;
}
