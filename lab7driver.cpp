#include "hash.h"


int main()
{
  size_t x = 5;
  x = hash(x);
  std::cout <<  x << std::endl;
  toHex(x);
  return 0;
}
