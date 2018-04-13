#include <iostream>

struct expenses {
  double values[4]; 
};

void fillArray(expenses *ptr);
void showArray(const char* s[], const expenses * ptr);

int main() {
  const char *seasons[] = {"Spring", "Summer", "Autumn", "Winter"};
  expenses exp;

  fillArray(&exp);
  showArray(seasons, &exp);

  return 0;
}

void fillArray(expenses *ptr) {
  double *pt;
  double tmp;
  
  for(int i=0; i<4; i++) {
    std::cin>>tmp;
    ptr->values[i] = tmp;
  }
}

void showArray(const char* s[], const expenses * ptr) {
  double total = 0.0;
  double *pTotal = &total;

  for(int i=0; i<4; i++) {
    std::cout<<*(s+i)<<" | "<<ptr->values[i]<<std::endl;
    *pTotal += ptr->values[i];
  }

  std::cout<<"Annual expenses: "<<*pTotal<<std::endl;
}
