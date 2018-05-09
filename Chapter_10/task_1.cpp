#include <iostream>

class Account {
  private:
    std::string name;
    std::string number;
    double balance;

  public:
    Account(const std::string &n = "Jan Kowalski", const std::string &num = "0", double b = 0.0 ) {
      name = n;
      number = num;
      balance = b;
    }

    void show() {
      std::cout<<name<<" | "<<number<<" | "<<balance<<std::endl;
    }

    void addCredit(double amount) {
      balance += amount;
    }

    void removeCredit(double amount) {
      if(amount > balance) {
        std::cout<<"insufficient funds!"<<std::endl;
      } else {
        balance -= amount;
      }
    }
};

int main()
{
  Account acc1 {"Janusz Tracz", "12000012340901234", 50.8};
  acc1.show();
 
  return 0;
}
