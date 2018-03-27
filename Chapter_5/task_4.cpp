#include <iostream>

int main() {
  int startMoney = 100;
  int dafneMoney = startMoney;
  float cleoMoney = startMoney;
  int i = 0;

  for(;;) {

    dafneMoney = dafneMoney + 0.1*startMoney;
    cleoMoney = cleoMoney + 0.05*cleoMoney;
    i++;
    std::cout<<"Dafne: "<<dafneMoney<<" | Cleo: "<<cleoMoney<<std::endl;

    if(cleoMoney > dafneMoney) {
      std::cout<<"After "<<i<<" years Dafne has less savings than Cleo"<<"\n";
      break;
    }
  }
  return 0;
}
