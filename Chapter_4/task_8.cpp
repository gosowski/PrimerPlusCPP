#include <iostream>

struct Pizza {
  std::string brandName;
  float diameter;
  float weight;
};

int main() {
  Pizza *pPizza = new Pizza;

  std::cout<<"Enter pizzas manufacturer name: ";
  getline(std::cin, pPizza->brandName);

  std::cout<<"Enter pizzas diameter: ";
  std::cin>>pPizza->diameter;

  std::cout<<"Enter pizzas weight: ";
  std::cin>>(*pPizza).weight;

  std::cout<<"Details of pizza:"<<std::endl;
  std::cout<<"Manufacturer name: "<<pPizza->brandName<<"\n";
  std::cout<<"Diameter: "<<(*pPizza).diameter<<"\n";
  std::cout<<"Weight: "<<(*pPizza).weight<<"\n";

  delete pPizza;
  return 0;
}
