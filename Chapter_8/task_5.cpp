#include <iostream>

template <typename T> T max5(const T *, const T *);

int main() {
  int arr[] = {1, 2, 9,4,5};
  double arr2[] = {11.2, 2.5, 3.0, 4.2, 5.1};

  std::cout<<max5(arr, arr+5)<<std::endl;
  std::cout<<max5(arr2, arr2+5)<<std::endl;

  return 0;
}

template <typename T> T max5(const T *begin, const T *end) {
  T tmp = 0;
  const T *pt;
  for(pt=begin; pt!=end; pt++) {
    if(tmp < *pt) {
      tmp = *pt;
    }
  }
  return tmp;
}
