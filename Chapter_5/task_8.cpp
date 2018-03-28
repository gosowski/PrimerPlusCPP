#include <iostream>
#include <cstring>

int main() {

  int counter = 0;
  char word[50];

  std::cin>>word;

  do {

    counter++;
    std::cin>>word;
    
  } while(std::strcmp(word, "ready"));

  std::cout<<"Number of words: "<<counter<<"\n";

  return 0;
}
