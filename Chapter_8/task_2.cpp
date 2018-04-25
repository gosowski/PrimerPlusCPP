#include <iostream>

template <typename T> T max5(T []);

int main() {
  int arr[] = {1, 2, 9,4,5};
  double arr2[] = {1.2, 2.5, 3.0, 4.2, 5.1};

  std::cout<<max5(arr)<<std::endl;
  std::cout<<max5(arr2)<<std::endl;

  return 0;
}

template <typename T> T max5(T arr[5]) {
  T tmp = 0;
  for(int i=0; i<5; i++) {
    if(tmp < arr[i]) {
      tmp = arr[i];
    }
  }
  return tmp;
}