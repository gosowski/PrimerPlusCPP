#include <iostream>

void fillArray(double *begin, const double *end);
void showArray(const char* s[], double* e);

struct expenses {
  double values[4]; 
};

int main() {
  const char *seasons[] = {"Spring", "Summer", "Autumn", "Winter"};
  expenses exp;


  fillArray(exp.values, exp.values+4);
  showArray(seasons, exp.values);

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
  double *pTotal = &total;
  double *pt = e;
  int i = 0;

  for(pt=e;pt<e+4; pt++) {
    std::cout<<*(s+i)<<" | "<<*pt<<std::endl;
    *pTotal += *pt;

    i++;
  }

  std::cout<<"Annual expenses: "<<*pTotal<<std::endl;
}
