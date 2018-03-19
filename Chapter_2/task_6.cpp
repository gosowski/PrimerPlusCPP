#include <iostream>

double lightYearsToAstronomicalUnit (double ly);

int main() {

  double lightYears = 0;
  std::cout<<"Enter light years value: ";
  std::cin>>lightYears;

  double astronomicalUnit = lightYearsToAstronomicalUnit(lightYears);
  std::cout<<lightYears<<" light years is equal to: "<<astronomicalUnit<<" astronomical units"<<std::endl;

  return 0;
}

double lightYearsToAstronomicalUnit (double ly) {

  const int oneYearAU = 63240;
  double au = ly * oneYearAU;

  return au;
}
