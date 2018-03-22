#include <iostream>

struct Pizza {
  std::string brandName;
  float diameter;
  float weight;
};

int main() {
  Pizza pizza;
  std::cout<<"Enter pizzas manufacturer name: ";
  getline(std::cin, pizza.brandName);

  std::cout<<"Enter pizzas diameter: ";
  std::cin>>pizza.diameter;

  std::cout<<"Enter pizzas weight: ";
  std::cin>>pizza.weight;

  std::cout<<"Details of pizza:"<<std::endl;
  std::cout<<"Manufacturer name: "<<pizza.brandName<<"\n";
  std::cout<<"Diameter: "<<pizza.diameter<<"\n";
  std::cout<<"Weight: "<<pizza.weight<<"\n";

  return 0;
}
