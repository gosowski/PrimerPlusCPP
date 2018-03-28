#include <iostream>
#include <string>

struct Car {
  std::string brand;
  int buildYear;
};

int main() {
  int numberOfCars;
  std::cout<<"Enter number of cars: ";
  std::cin>>numberOfCars;

  Car *ptr = new Car[numberOfCars];

  for(int i=0; i<numberOfCars; i++) {
    std::cout<<"Enter vehicle brand: ";
    getline(std::cin>>std::ws, ptr[i].brand);
    // std::cin>>(*ptr).brand;

    std::cout<<"Enter a year of build: ";
    std::cin>>ptr[i].buildYear;

  }

  for(int i=0; i<numberOfCars; i++) {
    std::cout<<ptr[i].buildYear<<" "<<ptr[i].brand<<std::endl;
  }

  delete [] ptr;
}
