#include <iostream>
#include <string>

int main() {

  std::string name;
  std::cout<<"Enter name: ";
  std::cin>>name;

  std::string surname;
  std::cout<<"Enter surname: ";
  std::cin>>surname;

  std::string result = surname + ", " + name;
  std::cout<<"Concatenation result is: "<<result<<std::endl;
    
  return 0;
}
