#include <iostream>

int main() {

  std::string months[] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  int disposal[3][12];
  int annualSum = 0;
  int overalSum = 0;

  for(int i=0; i<3; i++) {
    for(int j=0; j<12; j++) {
      std::cout<<"Books sold in "<<months[j]<<" : ";
      std::cin>>disposal[i][j];
      annualSum += disposal[i][j];
    }
      std::cout<<i+1<<" year disposal: "<<annualSum<<"\n";
      overalSum += annualSum;
      annualSum = 0;
  }

  std::cout<<"Overal disposal for 3 years: "<<overalSum<<"\n";

  return 0;
}
