#include <iostream>
#include <cstring>

struct Stringy {
  char *str;
  int ct;
};

void set(Stringy &, const char *);
void show(const Stringy &, int = 1);
void show(const char *str, int = 1);

int main() {
  Stringy beany;
  char testing[] = "Reality is not what it used to be";

  set(beany, testing);
  show(beany);
  show(beany, 2);
  testing[0] = 'D';
  testing[1] = 'u';
  show(testing);
  show(testing, 3);
  show("Done!"); 

  delete [] beany.str; 

  return 0;
}

//http://en.cppreference.com/w/cpp/string/byte/strcpy

void set(Stringy &obj, const char *s) {
  char *ps = new char[strlen(s)+1];
  obj.str = std::strcpy(ps, s);
  obj.ct = std::strlen(s);
}

void show(const Stringy &obj, int n) {
  for(int i=0; i<n; i++) {
    std::cout<<obj.str<<std::endl;
  }
}

void show(const char *str, int n) {
  for(int i=0; i<n; i++) {
    std::cout<<str<<std::endl;
  }
}


