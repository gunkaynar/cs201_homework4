//Gun Kaynar
//22101351

#ifndef doubleStack_h
#define doubleStack_h
#include <iostream>
#include <cstdlib>
using namespace std;
const int doubleMAX_STACK = 200;
typedef double doubleStackItemType;

class doubleStack{

public:
    doubleStack();

   bool isEmpty() const;
   bool push(doubleStackItemType newItem);
   bool pop();
   bool pop(doubleStackItemType& stackTop);
   bool getTop(doubleStackItemType& stackTop) const;
   double getTop() const;
private:
    doubleStackItemType items[doubleMAX_STACK];
   int top;
};




#endif /* doubleStack_h */
