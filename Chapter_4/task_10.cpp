#include <iostream>
#include <array>

int main() {
  std::array <float, 3> result;
  float sum = 0.0;

  for(int i=0; i<3; i++) {
    std::cin>>result[i];
    sum += result[i];
  }

  std::cout<<"Average time: "<<sum/3<<std::endl;

  return 0;
}
