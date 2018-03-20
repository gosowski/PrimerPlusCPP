#include <iostream>

void timePrint(long long int s);

int main() {
  long long int seconds{0};

  std::cout<<"Enter number of seconds: ";
  std::cin>>seconds;

  std::cout<<seconds<<" seconds = ";
  timePrint(seconds);

  return 0;
}

void timePrint(long long int s) {
  const int hoursPerDay = 24;
  const int minutesPerHour = 60;
  const int secondsPerMinute = 60;

  int days = s/(hoursPerDay*minutesPerHour*secondsPerMinute);
  s = s - days*hoursPerDay*minutesPerHour*secondsPerMinute;

  int hours = s/(minutesPerHour*secondsPerMinute);
  s = s - hours*minutesPerHour*secondsPerMinute;

  int minutes = s/secondsPerMinute;
  s = s - minutes*secondsPerMinute;

  int seconds = s;

  std::cout<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<std::endl;
}
