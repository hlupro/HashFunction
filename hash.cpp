#include "hash.h"

size_t hash(size_t x)
{
  //will be used for 2^32
  size_t w = 32;
  //value below w but not too small
  size_t p = 13;
  //ten-digit prime
  size_t a = 5754853343;
  //
  size_t ax = a*x;
  //variable in order to avoid mismatch data types
  size_t one = 1;

  //another way to do ax mod 2^w using bitwise operators
  size_t axModW = ax & ((one<<w) - one);
  //another way to divide by 2^(w-p) essentially cutting off the bits
  size_t hash = axModW >> (w-p);
  return hash;
}
