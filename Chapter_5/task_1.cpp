#include <iostream>

int main() {

  int x,y;
  int result = 0;

  std::cin>>x;
  std::cin>>y;

  for(int i=x; i<=y; i++) {

    result +=i;
  }

  std::cout<<"Sum is: "<<result<<std::endl;
  return 0;
}
