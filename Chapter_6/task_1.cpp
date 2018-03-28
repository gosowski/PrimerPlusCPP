#include <iostream>
#include <cctype>

int main() {

  char ch;

  std::cin.get(ch);

  while(ch != '@') {
    if(isalpha(ch)) {
      if(islower(ch)) {
        ch = std::toupper(ch);
        std::cout<<ch;
      } else if(isupper(ch)) {
        ch = std::tolower(ch);
        std::cout<<ch;
      }
    }
    std::cin.get(ch);
  }
  std::cout<<std::endl;

  return 0;
}
