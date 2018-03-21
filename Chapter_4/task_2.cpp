#include <iostream>
#include <string>

int main() {
  std::string name;
  std::string dessert;

  std::cout<<"Enter your name: ";
  getline(std::cin, name);

  std::cout<<"Enter your favourite dessert: ";
  getline(std::cin, dessert);

  std::cout<<"I have for your "<<dessert;
  std::cout<<", "<<name<<".\n";

  return 0;
}
