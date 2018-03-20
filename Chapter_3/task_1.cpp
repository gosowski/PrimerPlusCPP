#include <iostream>

float toInches(float cm);
float toFeet(float cm);
int main() {
  float height{0};
  std::cin>>height;

  std::cout<<"Your height in inches is equal to "<<toInches(height)<<std::endl;
  std::cout<<"Your height in feet is equal to "<<toFeet(height)<<std::endl;

  return 0;
}

float toInches(float cm) {
  const float inch = 2.54;
  float inches = cm/inch;
  return inches;
}

float toFeet(float cm) {
  const float foot = 30.48;
  float feet = cm/foot;
  return feet;
}
