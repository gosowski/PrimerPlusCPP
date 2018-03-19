#include <iostream>

float celsiusToFahrenheit(float c);

int main() {
  float celsius = 0;

  std::cout<<"Enter temperature in celsius degrees: ";
  std::cin>>celsius;

  float fahrenheit = celsiusToFahrenheit(celsius);
  std::cout<<celsius<<"C is equal to: "<<fahrenheit<<" Fahrenheit"<<std::endl;
  return 0;
}

float celsiusToFahrenheit(float c) {
  float f = 1.8 * c + 32;
  return f;
}
