#ifndef SALES_HPP
#define SALES_HPP
#include <iostream>

// namespace SALES {

  const int quarters = 4;

  class Sales {
    private:
      double sales[quarters];
      double average;
      double maximum;
      double minimum;

    public:

      Sales() {

      }

      Sales(double s[], double a, double mi, double mx) {
        for(int i=0; i<quarters; i++) {
          sales[i] = s[i];
        }

        average = a;
        maximum = mx;
        minimum = mi;
      }

      void setSales() {

        double sal[quarters], avg, maximum = 0.0, minimum, sum = 0.0;

        for(int i=0; i<quarters; i++) {
          std::cout<<"Sales volume for "<<i+1<<" quarter: ";
          std::cin>>sal[i];

          sum += sal[i];
          if(maximum < sal[i]) {
            maximum = sal[i];
          }
        }

        minimum = sal[0];
        for(int i=0; i<quarters; i++) {
          if(minimum > sal[i]) {
            minimum = sal[i];
          }
        }

        avg = sum/quarters;

        *this = Sales(sal, avg, minimum, maximum);

      }
      
      void show() {
        for(int i=0; i<quarters; i++) {
          std::cout<<sales[i]<<", ";
        }
        std::cout<<std::endl;
        std::cout<<average<<" | "<<maximum<<" | "<<minimum<<std::endl;
      }


  };
// }

#endif