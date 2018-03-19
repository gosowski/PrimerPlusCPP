#include <iostream>

int main () {
  float nauticalMiles = 0;
  const int NMToMeter = 1852;
  std::cin>>nauticalMiles;

  float meters = nauticalMiles*NMToMeter;
  std::cout<<nauticalMiles<<" NM is equal to: "<<meters<<" meters"<<std::endl;
  return 0;
}
