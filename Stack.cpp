//Gun Kaynar
//22101351

#include "Stack.h"

Stack::Stack(): top(-1){

}

bool Stack::isEmpty() const{

   return top < 0;

}

bool Stack::push(StackItemType newItem){


   if (top >= MAX_STACK-1)
      return false;

   else{
      ++top;
      items[top] = newItem;
      return true;
   }

}

bool Stack::pop(){

   if (isEmpty())
      return false;

   else {
      --top;
      return true;
   }

}

bool Stack::pop(StackItemType& stackTop){

   if (isEmpty())
      return false;
         
   else {
      stackTop = items[top];
      --top;
      return true;
   }

}
bool Stack::getTop(StackItemType& stackTop)
             const{

   if (isEmpty())
      return false;

   else {
      stackTop = items[top];
      return true;
   }

}

char Stack::getTop()const{

   if (isEmpty())
      return '\0';

   else {
      return items[top];
   }

}
