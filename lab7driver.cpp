#include "hash.h"
#include <iomanip>

int main()
{
  size_t x = 5;
  x = hash(x);
  std::cout <<  x << std::endl;
  std::cout << std::hex << x << std::endl;
  return 0;
}
