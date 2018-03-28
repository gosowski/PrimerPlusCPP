#include <iostream>

int main() {

  const int donatesNums = 10;
  double donatesArr[donatesNums];
  double sum = 0.0;

  int counter = 0;
  int i = 0 ;
  std::cin>>donatesArr[i];

  while(counter < donatesNums) {

    std::cout<<"COUNTER VALUE: "<<counter<<" | Iterator: "<<i<<std::endl;
    counter++;
    i++;
    std::cin>>donatesArr[i];
  }
  std::cout<<"poza while"<<std::endl;

  sum /= counter;
  std::cout<<sum<<std::endl;

  for(int i=0; i<donatesNums; i++) {
    if(donatesArr[i] > sum) {
      std::cout<<donatesArr[i]<<" ";
    }
  }
  std::cout<<std::endl;

  return 0;
}
