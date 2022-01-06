//Gun Kaynar
//22101351

#ifndef Stack_h
#define Stack_h
#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX_STACK = 200;
typedef char StackItemType;

class Stack{

public:
   Stack();

   bool isEmpty() const;
   bool push(StackItemType newItem);
   bool pop();
   bool pop(StackItemType& stackTop);
   bool getTop(StackItemType& stackTop) const;
   char getTop() const;
private:
   StackItemType items[MAX_STACK];
   int top;
};


#endif /* Stack_h */
