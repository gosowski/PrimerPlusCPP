#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>

class Person {
  private:
    static const int LIMIT = 256;
    std::string lname;
    char fname[LIMIT];

  public:
    Person() {
      lname = "";
      fname[0] = '\0';
    }

    Person(const std::string &ln, const char *fn = "HejU") {
      lname = ln;
      strcpy(fname, fn);
    }

    void show() const {
      std::cout<<lname<<" | "<<fname<<std::endl;
    }

    void formalShow() const {
      std::cout<<fname<<" | "<<lname<<std::endl;
    }
};

#endif