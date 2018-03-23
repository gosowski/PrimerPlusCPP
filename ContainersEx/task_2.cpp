#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string shuffleString(std::string);

int main() {
  std::string word;
  std::cin>>word;

  std::cout<<shuffleString(word)<<std::endl;
  return 0;
}

std::string shuffleString(std::string s) {
  std::vector <char> v;
  int strLenght = s.length();

  for(int i=0; i<strLenght; i++) {
    v.push_back(s[i]);
  }
  random_shuffle(v.begin(), v.end());
  std::string result(v.begin(), v.end());
  return result;
}
