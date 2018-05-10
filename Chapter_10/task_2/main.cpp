#include <iostream>
#include "Person.hpp"

int main(int argc, char const *argv[])
{
  Person one;
  Person two("Stach");
  Person three {"Janusz", "Tracz"};
  one.show();
  one.formalShow();

  two.show();
  two.formalShow();

  three.show();
  three.formalShow();
  return 0;
}

