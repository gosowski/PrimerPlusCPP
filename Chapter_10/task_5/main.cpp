#include <iostream>
#include "Stack.hpp"

int main(int argc, char const *argv[])
{
  Stack stack;
  customer cst;
  double sum = 0.0;

  char choice;
  std::cin>>choice;

  while(choice != 'q') {
    switch(choice) {
      case 'a':
        std::cin>>cst.fullname;
        std::cin>>cst.payment;

        if(stack.isfull()) {
          std::cout<<"Stack is full"<<std::endl;
        } else {
          stack.push(cst);
        }
        break;
      case 'r':
        if(stack.isempty()) {
          std::cout<<"Stack is empty"<<std::endl;
        } else {
          stack.pop(cst);
          sum += cst.payment;
        }
        break;
    }
    std::cin>>choice;
  }

  return 0;
}
