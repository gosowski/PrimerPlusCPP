#include <iostream>

void fillArray(double *begin, const double *end);
void showArray(const char* s[], double* e);

int main() {
  const char *seasons[] = {"Spring", "Summer", "Autumn", "Winter"};
  double expenses[4];

  fillArray(expenses, expenses+4);
  showArray(seasons, expenses);

  return 0;
}

void fillArray(double *begin, const double *end) {
  double *pt;
  double tmp;

  for(pt=begin; pt!=end; pt++) {
    std::cin>>tmp;
    *pt = tmp;
  }
}

void showArray(const char* s[], double* e) {
  double total = 0.0;
  double *pt = e;
  int i = 0;

  for(pt=e;pt<e+4; pt++) {
    std::cout<<*(s+i)<<" | "<<*pt<<std::endl;
    i++;
  }

  std::cout<<std::endl;
}
