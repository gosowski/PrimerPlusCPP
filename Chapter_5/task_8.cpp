#include <iostream>
#include <cstring>

int main() {

  int counter = 0;
  char word[50];

  do {

    counter++;
    std::cin>>word;

  } while(std::strcmp(word, "ready"));

  std::cout<<"Number of words: "<<counter-1<<"\n";

  return 0;
}
