#include <iostream>
using namespace std;
int main() {
  double x = 95000;
  double stateTax = 0.04;
  double countyTax = 0.02;
  double stateMoney = x*stateTax;
  double countyMoney = x*countyTax;
  cout << "stateTax = " << stateMoney << endl  //<< stream insertion operator,endl is \n
       << "CountyTax = "  << countyMoney << endl;
  return 0;
}
