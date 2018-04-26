#include <iostream>

struct Bar {
  const char *name;
  double weight;
  int calories;
};

void fnc(Bar &, const char * = "Millenium Munch", double =2.85, int =350);

int main() {
  Bar bar, mars;
  fnc(bar);
  fnc(mars, "Mars", 1.99, 175);
  return 0;
}

void fnc(Bar &obj, const char * n, double w, int c) {
  obj.name = n;
  obj.weight = w;
  obj.calories = c;

  std::cout<<obj.name<<" | "<<obj.weight<<" | "<<obj.calories<<std::endl;
}
