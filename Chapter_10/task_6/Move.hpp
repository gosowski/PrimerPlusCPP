#ifndef MOVE_HPP
#define MOVE_HPP
#include <iostream>

class Move {
  private:
    double x;
    double y;
  
  public:
    Move(double a = 0, double b = 0) {
      x = a;
      y = b;
    }

    void showmove() const {
      std::cout<<x<<" | "<<y<<std::endl;
    }

    Move add(const Move &m) const {
      double a = this->x+m.x;
      double b = this->y+m.y;
      return Move(a, b);
    }
    void reset (double a = 0, double b = 0) {
      x = a;
      y = b;
    }

};

#endif