#include <iostream>
int main() {
  int x = 10;
  int y = 3.0;
  int z = x/y;
  int g = x++;//g=10,x=11
  int k = ++x;//k=11,x=11
  x++;
  y--;
  std::cout<<z;
  return 0;
}
