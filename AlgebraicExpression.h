//Gun Kaynar
//22101351

#ifndef AlgebraicExpression_h
#define AlgebraicExpression_h

#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;

#include "Stack.h"
#include "doubleStack.h"
#include "stringStack.h"



// It converts an infix expression exp to its equivalent prefix form.
string infix2prefix( const string exp );
// It converts an infix expression exp to its equivalent postfix form.
string infix2postfix( const string exp );
// It converts a prefix expression exp to its equivalent infix form.
string prefix2infix( const string exp );
// It converts a prefix expression exp to its equivalent postfix form.
string prefix2postfix( const string exp );
// It converts a postfix expression exp to its equivalent infix form.
string postfix2infix( const string exp );
// It converts a postfix expression exp to its equivalent prefix form.
string postfix2prefix( const string exp );
//It evaluates an infix expression.
double evaluateInfix( const string exp );
//It evaluates a prefix expression.
double evaluatePrefix( const string exp );
//It evaluates a postfix expression.
double evaluatePostfix( const string exp );




#endif /* AlgebraicExpression_h */
