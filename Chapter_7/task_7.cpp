#include <iostream>

double* fill_array(double * begin, double * end);
void showArray(const double *begin, const double *end);
void reverseArray(const double *begin, const double *end);

int main() {
  const int size = 10;
  double ar[10];

  double *arSize = fill_array(ar, ar+10);
  showArray(ar, arSize);
  reverseArray(ar, arSize);

  return 0;
}

double* fill_array(double * begin, double * end) {
  double *pt;
  double tmp;

  for(pt=begin; pt!=end; pt++) {
    std::cin>>tmp;

    if(!std::cin) {
      break;
    }

    *pt = tmp;
    std::cout<<pt<<" | "<<*pt<<std::endl;
  }

  return pt;
}

void showArray(const double *begin, const double *end) {
  const double *pt;

  for(pt=begin; pt!=end; pt++) {
    std::cout<<*pt<<" ";
  }
  std::cout<<std::endl;
}

void reverseArray(const double *begin, const double *end) {
  const double *pt;
  for(pt=(end-1); pt>=begin; pt--) {
    std::cout<<*pt<<" ";
  }
  std::cout<<std::endl;
}

