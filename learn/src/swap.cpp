#include <iostream>
int main() {
  int a = 1;
  int b = 2;
  int c = b;
  b = a;
  a = c;
  std::cout<<a;
  std::cout<<b;
  return 0;
}
