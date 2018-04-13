#include <iostream>
#include <string>

const int SLEN = 30;

struct student {
  char fullname[SLEN];
  char hobby[SLEN];
  int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student *ps, int n);

int main() {
  std::cout<<"Enter number of people in each group: ";
  
  int classSize;
  std::cin>>classSize;

  while(std::cin.get() != '\n') {
    continue;
  }

  student * ptrStudent = new student[classSize];
  int entered = getinfo(ptrStudent, classSize);

  for(int i=0; i<entered; i++) {
    display1(ptrStudent[i]);
    display2(&ptrStudent[i]);
  }

  display3(ptrStudent, entered);
  delete [] ptrStudent;
  std::cout<<"Done!"<<std::endl;


  return 0;
}

int getinfo(student pa[], int n) {
  int numberOfStudents = 0;;
  std::cout<<"Enter student name, hobby, ooplevel"<<std::endl;

  for(int i=0; i<n; i++) {
    std::cin>>std::ws;
    std::cin.getline(pa[i].fullname, SLEN);

    if(pa[i].fullname == "Janusz") {
      break;
    }

    std::cin.getline(pa[i].hobby, SLEN);
    std::cin>>pa[i].ooplevel;

    numberOfStudents++;
  }

  return numberOfStudents;
}

void display1(student st) {
  std::cout<<st.fullname<<" | "<<st.hobby<<" | "<<st.ooplevel<<std::endl;
}

void display2(const student *ps) {
  std::cout<<ps->fullname<<" | "<<ps->hobby<<" | "<<ps->ooplevel<<std::endl;  
}

void display3(const student *ps, int n) {
  for(int i=0; i<n; i++) {
    std::cout<<ps->fullname<<" | "<<ps->hobby<<" | "<<ps->ooplevel<<std::endl;
    ps++;  
  }
}

