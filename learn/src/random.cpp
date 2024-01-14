#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(){
  const short maxValue=6;
  const short minValue=1;
  srand(time(0)); //random value generator for the current time
  short number1 = (rand() % (maxValue - minValue + 1))+minValue;
  short number2 = (rand() % (maxValue - minValue + 1))+minValue;
  cout << number1 <<' '<< number2<< endl;
  return 0;
  
}
