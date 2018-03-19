#include <iostream>

void setTime(int h, int m);

int main() {

  int hour = 0;
  int minute = 0;

  std::cout<<"Enter hour: ";
  std::cin>>hour;

  std::cout<<"Enter minute: ";
  std::cin>>minute;

  setTime(hour, minute);
  return 0;
}

void setTime(int h, int m) {
  std::cout<<h<<":"<<m<<std::endl;
}
