#include <iostream>

unsigned long long calculate(int);

int main() {
  unsigned number;
  std::cin>>number;

  unsigned long long result = calculate(number);
  std::cout<<result<<std::endl;
  return 0;
}

unsigned long long calculate(int num) {
  if(num == 0) {
    return 1;
  }

  return num * calculate(num - 1);
}
