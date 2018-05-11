#ifndef STACK_HPP
#define STACK_HPP

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;

class Stack {
  private:
    enum {MAX = 10};
    Item items[MAX];
    int top;

  public:
    Stack() {
      top = 0;
    }

    bool isempty() const {
      return top == 0;
    }

    bool isfull() const {
      return top == MAX;
    }

    bool push(const Item &item) {
      if(top < MAX) {
        items[top++] = item;
        return true;
      } else {
        return false;
      }
    }

    bool pop(Item &item) {
      if(top > 0) {
        item = items[--top];
        return true;
      } else {
        return false;
      }
    }
};

#endif