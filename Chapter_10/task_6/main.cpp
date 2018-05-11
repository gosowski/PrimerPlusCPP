#include <iostream>
#include "Move.hpp"
 
int main(int argc, char const *argv[])
{
  Move mv {1.2, 1.7};
  mv.showmove();

  Move mv1 {2.1, 2.6};
  mv1.showmove();

  Move test = mv.add(mv1);
  test.showmove();

  test.reset();
  test.showmove();

  test.reset(2, 0.5);
  test.showmove();

  return 0;
}
