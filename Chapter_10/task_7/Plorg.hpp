#ifndef PLORG_HPP
#define PLORG_HPP
#include <string.h>
#include <iostream>

const int limit = 19;
class Plorg {
  private:
    char name[limit];
    int IS;

  public:
    Plorg(const char *n = "Plorga", int s = 50) {
      strcpy(name, n);
      IS = s;
    }

    void setIS(int s) {
      this->IS=s;
    }

    void show() {
      std::cout<<this->name<<" | "<<this->IS<<std::endl;
    }
};

#endif