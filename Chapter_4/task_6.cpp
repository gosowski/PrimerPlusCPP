#include <iostream>

struct Bar {
  std::string brand;
  float weight;
  int calories;
};

int main() {

  Bar array[] = {
    {"Snickers", 25.00, 300},
    {"Mars", 25.43, 350},
    {"Twix", 39.50, 327},
  };

  std::cout<<"First element: "<<array[0].brand<<", "<<array[0].weight<<", "<<array[0].calories<<std::endl;
  std::cout<<"Second element: "<<array[1].brand<<", "<<array[1].weight<<", "<<array[1].calories<<std::endl;
  std::cout<<"Third element: "<<array[2].brand<<", "<<array[2].weight<<", "<<array[2].calories<<std::endl;

  return 0;
}
