#include "hash.h"

int main()
{
  size_t x = 5;
  x = hash(x);
  cout <<  x << endl;
  toHex(x);
  string str = "Test";
  x = hash(str);
  std::cout << x << std::endl;
  return 0;
}
