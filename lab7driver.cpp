#include "hash.h"

int main()
{
  cout << "=================Lab 7========================= " << endl;
  cout << "Testing Hash functions" << endl;
  cout << "Hashing the number 5" << endl;
  size_t x = 5;
  size_t y = hash(x);
  cout << x <<"'s Hash value is " << y << endl;
  toHex(x);
  x = 350;
  y = hash(x);
  cout << x <<"'s Hash value is " << y << endl;
  toHex(x);
  x = 658438232;
  y = hash(x);
  cout << x <<"'s Hash value is " << y << endl;
  toHex(x);
  x = 82992939291919;
  y = hash(x);
  cout << x <<"'s Hash value is " << y << endl;
  toHex(x);
  cout << "Testing hash function with string #1" << endl;
  string str = "Test";
  x = hash(str);
  std::cout << x << std::endl;
  return 0;
}
