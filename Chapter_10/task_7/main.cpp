#include <iostream>
#include "Plorg.hpp"
 
int main(int argc, char const *argv[])
{
  Plorg obj;
  obj.show();

  Plorg obj2 {"Janusz", 100};
  obj2.show();

  
  return 0;
}

