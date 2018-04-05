#include <iostream>

int setData(int arr[], int);
void showData(int *, int *);
template <class T> T avg(T arr[], T size);

int main() {
  int array[10] = {};

  int counter = setData(array, 10);
  std::cout<<counter<<std::endl;

  showData(array, array+counter);
  std::cout<<avg(array, counter);

  std::cout<<std::endl;
  return 0;
}

int setData(int arr[], int size) {
  char result;
  int counter = 0;

  while(counter<10 && result != 'q') {
    std::cin>>result;
    arr[counter] = result-48; //convert chart to int chart-48
    counter++;
  }
  
  if(result == 'q') {
    counter -= 1;
  }

  return counter;
}

void showData(int * begin, int * end) {
  for(int *ptr=begin; ptr!=end; ptr++) {
    std::cout<<*ptr<<" ";
  }
}

template <class T> T avg(T arr[], T size) {
  T sum = 0.0;

  for(int i=0; i<size; i++) {
    sum += arr[i];
  }

  return sum/size;
}
