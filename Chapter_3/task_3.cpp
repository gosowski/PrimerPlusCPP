#include <iostream>

float toDec(int d, int m , int s);

int main() {
  int degrees{0}, minutes{0}, seconds{0};
  std::cout<<"Enter degrees, minutes and seconds:";
  std::cin>>degrees;
  std::cin>>minutes;
  std::cin>>seconds;

  std::cout<<"Decimal coordinates: "<<toDec(degrees, minutes, seconds)<<std::endl;

  return 0;
}

float toDec(int d, int m , int s) {
  const int secInMin = 60;
  const int minPerDegree = 60;

  float decMin = (float)m/minPerDegree;
  float decSec = (float)s/secInMin/minPerDegree;
  float result = (float)d + decMin + decSec;
  return result;
}
