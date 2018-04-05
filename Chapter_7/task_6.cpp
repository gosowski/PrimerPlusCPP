#include <iostream>
#include <cctype>

int fill_array(double arr[], int size);
void show_array(double arr[], int size);
void reverse_array(double arr[], int size);

int main() {
  int arrSize;
  std::cin>>arrSize;

  double *ptrArr = new double [arrSize];
  int num = fill_array(ptrArr, arrSize);
  show_array(ptrArr, num);

  reverse_array(ptrArr, num);
  show_array(ptrArr, num);

  delete [] ptrArr;
  return 0;
}

int fill_array(double arr[], int size) {
  double numberToAdd;
  int i = 0;

  while(i<size) {
    std::cin>>numberToAdd;
    arr[i] = numberToAdd;
    i++;
  }

  return i;
}

void show_array(double arr[], int size) {
  for(int i=0; i<size; i++) {
    std::cout<<arr[i]<<" ";
  }
  std::cout<<std::endl;
}

void reverse_array(double arr[], int size) {
  double tmp[size];

  for(int i=0; i<size; i++) {
    tmp[i] = arr[i];
  }

  for(int i=0, j=size-1; i<size; i++, j--) {
    arr[i] = tmp[j];
  }
}
