#include <iostream>

using namespace std;

int main() {
  int number = 1'000'000;
  short another = number; //narrow down the type
  cout << another << endl;

  short another2{number};
  cout << another2  << endl;// using braket initialization
  return 0;
}
