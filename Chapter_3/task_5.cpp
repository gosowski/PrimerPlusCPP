#include <iostream>

int main() {
  long long int worldPopulation{0};
  long long int polandPopulation{0};
  std::cin>>worldPopulation;
  std::cin>>polandPopulation;

  float percentage = (float)polandPopulation/worldPopulation;
  std::cout<<"Poland population is "<<percentage*100<<"% of world population"<<std::endl;

  return 0;
}
