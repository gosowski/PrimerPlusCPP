#include <iostream>

using namespace std;

typedef std::string str;
str upperCase(str &);

int main() {

  str word;
  getline(std::cin, word);

  while(word != "q") {
    std::cout<<upperCase(word)<<std::endl;
    getline(std::cin, word);
  }

  return 0;
}

str upperCase(str &string) {
  for(int i=0; i<string.length(); i++) {
    string[i] = toupper(string[i]);
  }

  return string;
}