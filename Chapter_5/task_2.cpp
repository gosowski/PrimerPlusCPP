#include <iostream>
#include <array>

int main() {

  std::array<long double, 101>numbers;

  numbers[1] = numbers[0] = 1;

  for(int i=2; i<101; i++) {
    numbers[i] = numbers[i-1]*i;
  }
  std::cout<<numbers[3]<<std::endl;

  return 0;
}
