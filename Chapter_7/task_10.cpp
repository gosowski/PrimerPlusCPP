#include <iostream>

double add(double, double);
double divide(double, double);
double subtract(double, double);

double calculate(double, double, double (*pf)(double, double));

int main() {
  double a,b;
  int choice;

  std::cin>>choice;
  while(choice !=0) {
    std::cin>>a>>b;

    switch (choice) {
      case 1:
        std::cout<<calculate(a,b,add)<<std::endl;
        break;
      case 2:
        std::cout<<calculate(a,b,divide)<<std::endl;
        break;
      case 3:
        std::cout<<calculate(a,b,subtract)<<std::endl;
    }

    std::cin>>choice;
  }
  
  return 0;
}

double calculate(double a, double b, double (*pf)(double, double)) {
  return (*pf)(a,b);
}

double add(double a, double b) {
  return a + b;
}

double divide(double a, double b) {
  if(b!=0) {
    return a/b;
  } else {
    std::cout<<"Dividing by 0 is prohibitted!"<<std::endl;
  }
}

double subtract(double a, double b) {
  return a - b;
}

