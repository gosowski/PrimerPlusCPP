#include <iostream>

int main() {

  std::string name;
  std::cout<<"What is your name? ";
  getline(std::cin, name);

  char surname[20];
  std::cout<<"What is your surname? ";
  std::cin.getline(surname, 20);

  int rate = 0;
  std::cout<<"What rate you deserve to? ";
  std::cin>>rate;

  int age = 0;
  std::cout<<"What is you age? ";
  std::cin>>age;

  std::cout<<"Surname: "<<surname<<", "<<name<<std::endl;
  std::cout<<"Rate: "<<rate-1<<std::endl;
  std::cout<<"Age: "<<age<<std::endl;

  return 0;
}
