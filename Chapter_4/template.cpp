#include <iostream>

template <typename T> T calc(T, T);

int main() {
  auto x = 0.0;
  auto y = 0.0;
  std::cin>>x;
  std::cin>>y;

  std::cout<<calc(x, y)<<std::endl;

  return 0;
}

template <typename T> T calc(T a, T b) {
  T result = 0;

  result = a + b;
  return result;
}
