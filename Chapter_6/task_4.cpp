#include <iostream>

void menu();
char choice();
char switchOption(char);

struct Person {
  char name[20];
  char alias[20];
  char position[20];
  int preference;
};

int main() {

Person array[] = {
  {"Janusz Tracz", "Czart", "CEO", 1},
  {"Tytus Bomba", "Kapitan", "kapitan", 2},
  {"Michal Glus", "Jaszczurka", "chorazy", 0}
};

menu();
// choice();
switchOption(choice());

return 0;
}

void menu() {
  std::cout<<"a. list by names"<<std::endl;
  std::cout<<"b. list by position"<<std::endl;
  std::cout<<"c. list by aliases"<<std::endl;
  std::cout<<"d. list by preferences"<<std::endl;
}

char choice() {
  char ch;
  
  std::cin>>ch;
  while(ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd') {
    std::cout<<"You entered invalid character"<<std::endl;
    menu();
    std::cin>>ch;
  }

  return ch;
}

char switchOption(char ch) {

    switch(ch) {
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
