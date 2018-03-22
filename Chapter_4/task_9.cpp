#include <iostream>

struct Bar {
  std::string brand;
  float weight;
  int calories;
};

int main() {
  Bar *ptr = new Bar[3];

  *ptr = {"Snickers", 25.00, 300};

  *(ptr+1) = {"Mars", 25.43, 350};

  ptr[2] = {"Twix", 39.50, 327};

  for(int i=0; i<3; i++) {
    std::cout<<ptr[i].brand<<" "<<ptr[i].weight<<" "<<ptr[i].calories<<std::endl;
  }

  delete [] ptr;
  return 0;
}
