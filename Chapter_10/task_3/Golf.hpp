#ifndef GOLF_HPP
#define GOLF_HPP
#include <iostream>
#include <string.h>

class Golf {
  private:
    static const int len = 40;
    char fullname[len];
    int handicap;

  public:

  Golf(const char *n = "Test", int hc = 0) {
    strcpy(fullname, n);
    handicap = hc;
  }

  void setGolf() {

    char text[len];
    int h;

    std::cin.getline(text, len);
    std::cin>>h;
    
    *this = Golf(text, h);
    strcpy(fullname, text);
    handicap = h;
  }

  void show() {
    std::cout<<fullname<<" | "<<handicap<<std::endl;
  }
};

#endif