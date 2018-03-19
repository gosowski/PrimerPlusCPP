#include <iostream>

void function1();
void function2();

int main() {
  function1();
  function1();
  function2();
  function2();
  return 0;
}

void function1() {
  std::cout<<"Text from function 1"<<std::endl;
}

void function2() {
  std::cout<<"Text from function 2"<<std::endl;
}
