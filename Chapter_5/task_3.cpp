#include <iostream>

int main() {

  int sum = 0;
  int x;

  std::cin>>x;
  while(x != 0) {
    sum += x;
    std::cout << sum << '\n';
    std::cin>>x;
  }

  return 0;
}
