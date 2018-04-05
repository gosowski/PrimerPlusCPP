#include <iostream>

long double probability(unsigned max, unsigned choice);
long double probabilitySum(long double pb, long double lt);

int main() {

  unsigned numbers, choice;
  std::cin>>numbers>>choice;

  long double lotto = probability(numbers, choice);

  std::cin>>numbers>>choice;

  long double powerBall = probability(numbers, choice);

  long double allProb = probabilitySum(lotto, powerBall);
  std::cout<<"probability is equal to: "<<allProb<<std::endl;
  return 0;

}

long double probability(unsigned max, unsigned choice) {
  long double result = 1.0;

  for (max, choice; choice > 0; max--, choice--) {
    result = result * max/choice;
  }

  return result;
}

long double probabilitySum(long double pb, long double lt) {
  long double result = pb * lt;

  return result;
}
