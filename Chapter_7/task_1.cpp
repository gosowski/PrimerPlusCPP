#include <iostream>

template <typename T> T avgHrm(T a, T b);

int main() {
  double a, b;

  while((std::cin>>a>>b) && (a != 0 && b != 0)) {
    std::cout<<avgHrm(a,b)<<std::endl;
  }
  return 0;
}

template <typename T> T avgHrm(T a, T b) {

  T result = 2*a*b/(a+b);
  return result;
}
