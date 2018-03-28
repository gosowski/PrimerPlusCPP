#include <iostream>
#include <string>

int main() {

  int counter = 0;
  std::string word;

  do {
    counter++;
    std::cin>>word;

  } while(word != "ready");

  std::cout<<"Number of entered words: "<<counter-1<<"'\n";

  return 0;
}
