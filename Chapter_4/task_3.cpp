#include <iostream>
#include <cstring>

int main() {

  const int arrSize = 20;
  char name[arrSize];
  char surname[arrSize];

  std::cout<<"Enter your name: ";
  std::cin.getline(name, arrSize);

  std::cout<<"Enter your surname: ";
  std::cin.getline(surname, arrSize);

  std::cout<<"Data inverted: "<<surname<<", "<<name<<"\n";
  return 0;
}
