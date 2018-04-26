#include <iostream>

void showWord(const std::string *ptr, int i=0);

int main() {
  int i = 0;
  std::string word = "Janusz Tracz";
  const std::string *ptr = &word;

  showWord(ptr);
  i++;
  

  return 0;
}

void showWord(const std::string *ptr, int i) {
  std::cout<<*ptr<<std::endl;
}