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

  strcat(surname, ", ");
  strcat(surname, name);

  std::cout<<"Data inverted: "<<surname<<std::endl;
  return 0;
}
