#include <iostream>

void setData(int arr[], int);
void showData(int *, int *);
double avg(int [], int);

int main() {
  int array[10];

  setData(array, 10);
  showData(array, array+10);
  std::cout<<avg(array, 10);

  std::cout<<std::endl;
  return 0;
}

void setData(int arr[], int size) {
  int result;

  for(int i=0; i<size; i++) {
    std::cin>>result;
    arr[i] = result;
  }
}

void showData(int * begin, int * end) {
  for(int *ptr=begin; ptr!=end; ptr++) {
    std::cout<<*ptr<<" ";
  }
}

double avg(int arr[], int size) {

  int sum = 0;

  for(int i=0; i<size; i++) {
    sum += arr[i];
  }

  return sum/10;
}
