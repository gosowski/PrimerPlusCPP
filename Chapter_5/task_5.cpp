#include <iostream>
#include <string>

int main() {

  std::string months[] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int size = sizeof(months)/sizeof(std::string);

  int numbersOfSold[size];
  int sum = 0;

  for(int i=0; i<size; i++) {
    std::cout<<"Number of books sold in "<<months[i]<<": ";
    std::cin>>numbersOfSold[i];

    sum += numbersOfSold[i];
  }

  std::cout<<"Annual sold books value: "<<sum<<"\n";

  return 0;
}
