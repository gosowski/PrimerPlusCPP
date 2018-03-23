#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

std::string reverseString(std::string);

int main() {
  std::string word;
  std::cin>>word;

  std::cout<<reverseString(word)<<std::endl;
  return 0;
}

std::string reverseString(std::string s) {

  std::vector <char> v;
  int length = s.length();

  for(int i=0; i<length; i++) {
    v.push_back(s[i]);
  }

  sort(v.begin(), v.end());
  std::string result(v.begin(), v.end());

  return result;
}
