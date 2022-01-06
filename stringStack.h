//Gun Kaynar
//22101351

#ifndef stringStack_h
#define stringStack_h
#include <iostream>
#include <cstdlib>
using namespace std;
const int stringMAX_STACK = 200;
typedef string stringStackItemType;

class stringStack{

public:
    stringStack();

   bool isEmpty() const;
   bool push(stringStackItemType newItem);
   bool pop();
   bool pop(stringStackItemType& stackTop);
   bool getTop(stringStackItemType& stackTop) const;
   string getTop() const;
private:
    stringStackItemType items[stringMAX_STACK];
   int top;
};





#endif /* stringStack_h */
