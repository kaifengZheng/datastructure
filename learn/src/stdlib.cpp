#include<iostream>
#include<cmath>

using namespace std;

int main() {
  /*
   *multiline comments
   */
  double r;
  const double PI=3.14;
  cout <<"Enter a radius:";
  cin >> r;
  double area = PI*pow(r,2);
  cout << "The area of the circle is " << area << endl;
  return 0;
}
