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

void printNames(Person*, char*);

int main() {

Person array[] = {
  {"Janusz Tracz", "Czart", "CEO", 1},
  {"Tytus Bomba", "Kapitan", "kapitan", 2},
  {"Michal Glus", "Jaszczurka", "chorazy", 0}
};

menu();

char userChoice = switchOption(choice());
char * ptr = &userChoice;

printNames(array, ptr);

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
        return 'a';
      case 'b':
        return 'b';
      case 'c':
        return 'c';
      case 'd':
        return 'd';
    }
}

void printNames(Person *arr, char *ptrCh) {
  switch(*ptrCh) {
    case 'a':
      for(int i=0; i<3; i++) {
        std::cout<<arr[i].name<<std::endl;
      }
      break;
    case 'b':
      for(int i=0; i<3; i++) {
        std::cout<<arr[i].alias<<std::endl;
      }
      break;
    case 'c':
      for(int i=0; i<3; i++) {
        std::cout<<arr[i].position<<std::endl;
      }
      break;
    case 'd':
      for(int i=0; i<3; i++) {
        if(arr[i].preference == 0) {
          std::cout<<arr[i].name<<std::endl;
        } else if(arr[i].preference == 1) {
          std::cout<<arr[i].alias<<std::endl;
        } else if(arr[i].preference == 2) {
          std::cout<<arr[i].position<<std::endl;
        }
      }
      break;
  }
}
