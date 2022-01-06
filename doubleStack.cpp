//Gun Kaynar
//22101351

#include "doubleStack.h"

doubleStack::doubleStack(): top(-1){

}

bool doubleStack::isEmpty() const{

   return top < 0;

}

bool doubleStack::push(doubleStackItemType newItem){


   if (top >= doubleMAX_STACK-1)
      return false;

   else{
      ++top;
      items[top] = newItem;
      return true;
   }

}

bool doubleStack::pop(){

   if (isEmpty())
      return false;

   else {
      --top;
      return true;
   }

}

bool doubleStack::pop(doubleStackItemType& stackTop){

   if (isEmpty())
      return false;
         
   else {
      stackTop = items[top];
      --top;
      return true;
   }

}
bool doubleStack::getTop(doubleStackItemType& stackTop)
             const{

   if (isEmpty())
      return false;

   else {
      stackTop = items[top];
      return true;
   }

}

double doubleStack::getTop()const{

   if (isEmpty())
      return '\0';

   else {
      return items[top];
   }

}
