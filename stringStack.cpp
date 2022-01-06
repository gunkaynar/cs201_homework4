//Gun Kaynar
//22101351

#include "stringStack.h"

stringStack::stringStack(): top(-1){

}

bool stringStack::isEmpty() const{

   return top < 0;

}

bool stringStack::push(stringStackItemType newItem){


   if (top >= stringMAX_STACK-1)
      return false;

   else{
      ++top;
      items[top] = newItem;
      return true;
   }

}

bool stringStack::pop(){

   if (isEmpty())
      return false;

   else {
      --top;
      return true;
   }

}

bool stringStack::pop(stringStackItemType& stackTop){

   if (isEmpty())
      return false;
         
   else {
      stackTop = items[top];
      --top;
      return true;
   }

}
bool stringStack::getTop(stringStackItemType& stackTop)
             const{

   if (isEmpty())
      return false;

   else {
      stackTop = items[top];
      return true;
   }

}

string stringStack::getTop()const{

   if (isEmpty())
      return "";

   else {
      return items[top];
   }

}
