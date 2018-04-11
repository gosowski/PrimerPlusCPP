#include <iostream>

int setData(double arr[], int);
void showData(double *, double *);
template <class T, class T2> T avg(T arr[], T2 size);

int main() {
  double array[10] = {};

  int counter = setData(array, 10);
  std::cout<<counter<<std::endl;

  showData(array, array+counter);
  std::cout<<avg(array, counter);

  std::cout<<std::endl;
  return 0;
}

int setData(double arr[], int size) {
  double result;
  int counter = 0;

  while(counter<10) {
    std::cin>>result;

    if(!std::cin) {
      break;
    }
    arr[counter] = result;
    counter++;
  }

  return counter;
}

void showData(double * begin, double * end) {
  for(double *ptr=begin; ptr!=end; ptr++) {
    std::cout<<*ptr<<" ";
  }
}

template <class T, class T2> T avg(T arr[], T2 size) {
  T sum = 0.0;

  for(int i=0; i<size; i++) {
    sum += arr[i];
  }

  return sum/size;
}
