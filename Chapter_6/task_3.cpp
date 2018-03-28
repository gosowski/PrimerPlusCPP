#include <iostream>

void menu();

int main() {
  char choice;

  menu();

  std::cin>>choice;
  while(choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd') {
    std::cout<<"You entered invalid character"<<std::endl;
    menu();
    std::cin>>choice;
  }

  switch(choice) {
    case 'a':
      std::cout<<"Option 1 has been chosen"<<std::endl;
      break;
    case 'b':
      std::cout<<"option 2 has been chosen"<<std::endl;
      break;
    case 'c':
      std::cout<<"Option 3 has been chosen"<<std::endl;
      break;
    case 'd':
      std::cout<<"option 4 has been chosen"<<std::endl;
      break;
  }
}

void menu() {
  std::cout<<"Choose option"<<std::endl;
  std::cout<<"a) Option 1"<<std::endl;
  std::cout<<"b) Option 2"<<std::endl;
  std::cout<<"c) Option 3"<<std::endl;
  std::cout<<"d) Option 4"<<std::endl;
}
