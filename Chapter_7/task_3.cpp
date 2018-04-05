#include <iostream>

struct box {
  char manufacturer[40];
  float height;
  float width;
  float lenght;
  float volume;
};

void showAll(box b1);
float volMeasurement(box *ptrBox);

int main() {
  box boxS = {"Tracz & Son", 20.5, 15.5, 30.7};
  boxS.volume = volMeasurement(&boxS); //send struct address as an argument
  showAll(boxS);

  return 0;
}

void showAll(box b1) {
  std::cout<<"Box producer: "<<b1.manufacturer<<std::endl;
  std::cout<<"Box dimensions (h:w:l): "<<b1.height<<" : "<<b1.width<<" : "<<b1.lenght<<std::endl;
  std::cout<<"Box volume: "<<b1.volume<<std::endl;
}

float volMeasurement(box *ptrBox) {
  ptrBox->volume = ptrBox->width * ptrBox->lenght * ptrBox->height;
  return (*ptrBox).volume;
}
