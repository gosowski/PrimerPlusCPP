#include <iostream>

struct Bar {
  std::string brand;
  float weight;
  int calories;
};

int main() {

  Bar snack = {"Mocha Munch", 2.3, 350};
  std::cout<<"Brand: "<<snack.brand<<", weight "<<snack.weight<<", calories "<<snack.calories<<std::endl;

  return 0;
}
