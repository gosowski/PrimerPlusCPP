#include <iostream>

int main() {

  int ageYears = 0;
  const int monthsPerYear = 12;

  std::cout<<"Enter your age: ";
  std::cin>>ageYears;

  int ageMonths = ageYears * monthsPerYear;
  std::cout<<"Your age in months is: "<<ageMonths<<std::endl;

  return 0;
}
