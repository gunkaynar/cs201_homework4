//Gun Kaynar
//22101351

#include <iostream>

#include "AlgebraicExpression.h"
using namespace std;
int main() {

    
    cout << "Testing infix2prefix function: " << endl;
    cout << "The algorithm found = " << infix2prefix("( 12 + 5 ) - 20 * 4") << " The actual result = - + 12 5 * 20 4"<< endl;
    cout << "The algorithm found = "<< infix2prefix("5-3*(2+3-5+7*(3))") << " The actual result = - 5 * 3 + - + 2 3 5 * 7 3"<< endl;
    cout << "The algorithm found = "<< infix2prefix("(18/3)*2+((13+7)*5+2)") << " The actual result = + * / 18 3 2 + * + 13 7 5 2"<< endl;
    cout << "The algorithm found = "<< infix2prefix("2*20/2+(3+4)*3+2-6+15") << " The actual result = + - + + / * 2 20 2 * + 3 4 3 2 6 15"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/infix-to-prefix-converter.html" << endl;

    
    
    cout << endl;
    cout << "Testing infix2postfix function: " << endl;
    cout << "The algorithm found = "<< infix2postfix("( 12 + 5 ) - 20 * 4") << " The actual result = 12 5 + 20 4 * -"<< endl;
    cout << "The algorithm found = "<< infix2postfix("4*8-2+11") << " The actual result = 4 8 * 2 - 11 +"<< endl;
    cout << "The algorithm found = "<< infix2postfix("10-7*(3+2)+7*2") << " The actual result = 10 7 3 2 + * - 7 2 * +"<< endl;
    cout << "The algorithm found = "<< infix2postfix("5*(6*2-2)") << " The actual result = 5 6 2 * 2 - *"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/infix-to-postfix-converter.html" << endl;

    
    cout << endl;
    cout << "Testing postfix2infix function: " << endl;
    cout << "The algorithm found = "<< postfix2infix("100 12 2 - 8 * + 4 /") << " The actual result = ((100 + ((12 - 2) * 8)) / 4)"<< endl;
    cout << "The algorithm found = "<< postfix2infix("5 6 2 * 2 - *") << " The actual result = (5 * ((6 * 2) - 2))"<< endl;
    cout << "The algorithm found = "<< postfix2infix("2 1 4 2 1 + * 3 + + *") << " The actual result = (2 * (1 + ((4 * (2 + 1)) + 3)))"<< endl;
    cout << "The algorithm found = "<< postfix2infix("2 20 * 2 / 3 4 + 3 2 - * + 6 - 15 +") << " The actual result = (((((2 * 20) / 2) + ((3 + 4) * (3 - 2))) - 6) + 15)"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/postfix-to-infix-converter.html" << endl;

    
    cout << endl;
    cout << "Testing prefix2infix function: " << endl;
    cout << "The algorithm found = "<< prefix2infix("* + * 100 2 4 - 12 4") << " The actual result = (((100 * 2) + 4) * (12 - 4))"<< endl;
    cout << "The algorithm found = "<< prefix2infix("* 2 + 1 + * 4 + 2 1 3") << " The actual result = (2 * (1 + ((4 * (2 + 1)) + 3)))"<< endl;
    cout << "The algorithm found = "<< prefix2infix("+ * / 18 3 2 * + 13 7 + 5 2") << " The actual result = (((18 / 3) * 2) + ((13 + 7) * (5 + 2)))"<< endl;
    cout << "The algorithm found = "<< prefix2infix("+ - + / * 2 20 2 * + 3 4 * 3 2 6 15") << " The actual result = (((((2 * 20) / 2) + ((3 + 4) * (3 * 2))) - 6) + 15)"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/prefix-to-infix-converter.html" << endl;

    
    
    cout << endl;
    cout << "Testing prefix2postfix function: " << endl;
    cout << "The algorithm found = "<< prefix2postfix("* + * 100 2 4 - 12 4") << " The actual result = 100 2 * 4 + 12 4 - *"<< endl;
    cout << "The algorithm found = "<< prefix2postfix("* 2 + 1 + * 4 + 2 1 3") << " The actual result = 2 1 4 2 1 + * 3 + + *"<< endl;
    cout << "The algorithm found = "<< prefix2postfix("+ - / 18 3 2 * + 13 7 + 5 2") << " The actual result = 18 3 / 2 - 13 7 + 5 2 + * +"<< endl;
    cout << "The algorithm found = "<< prefix2postfix("+ - + / * 2 20 2 * + 3 4 * 3 2 6 15") << " The actual result = 2 20 * 2 / 3 4 + 3 2 * * + 6 - 15 +"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/prefix-to-postfix-converter.html" << endl;

    
    cout << endl;
    cout << "Testing prefix2postfix function: " << endl;
    cout << "The algorithm found = "<< postfix2prefix("100 12 2 - 8 * + 4 /") << " The actual result = / + 100 * - 12 2 8 4"<< endl;
    cout << "The algorithm found = "<< postfix2prefix("2 1 4 2 1 + * 3 + + *") << " The actual result = * 2 + 1 + * 4 + 2 1 3"<< endl;
    cout << "The algorithm found = "<< postfix2prefix("18 3 / 2 ^ 13 7 + 5 2 * * +") << " The actual result = + ^ / 18 3 2 * + 13 7 * 5 2"<< endl;
    cout << "The algorithm found = "<< postfix2prefix("2 20 * 2 / 3 4 + 3 2 + * + 6 - 15 +") << " The actual result = + - + / * 2 20 2 * + 3 4 + 3 2 6 15"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/postfix-to-prefix-converter.html" << endl;

    
    cout << endl;
    cout << "Testing evaluateInfix function: " << endl;

    cout << "The algorithm found = " << evaluateInfix("( 12 + 5 ) - 20 * 4") << " The actual result = -63"<< endl;
    cout << "The algorithm found = "<< evaluateInfix("5 - 3 * ( 2 * 3 - 5 + 7 * ( 3 ) )") << " The actual result = -61"<< endl;
    cout << "The algorithm found = "<< evaluateInfix("( 18 / 3 ) - 2 + ( ( 13 + 7 ) * 5 + 2)") << " The actual result = 106"<< endl;
    cout << "The algorithm found = "<< evaluateInfix("2 * 20 / 2 + ( 3 + 4 ) * 3 + 2 - 6 + 15") << " The actual result = 52"<< endl;
    cout << "The actual result are from: https://www.google.com" << endl;

    
    
    cout << endl;
    cout << "Testing evaluatePrefix function: " << endl;

    cout << "The algorithm found = "<< evaluatePrefix("* + * 100 2 4 - 12 4") << " The actual result = 1632"<< endl;
    cout << "The algorithm found = "<< evaluatePrefix("* 2 + 1 + * 4 + 2 1 3") << " The actual result = 32"<< endl;
    cout << "The algorithm found = "<< evaluatePrefix("+ * / 18 3 2 * + 13 7 - 5 2") << " The actual result = 72"<< endl;
    cout << "The algorithm found = "<< evaluatePrefix("+ - + / * 2 20 2 * + 3 4 + 3 2 6 15") << " The actual result = 64"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/prefix-evaluator.html" << endl;

    
    cout << endl;
    cout << "Testing evaluatePostfix function: " << endl;
    cout << "The algorithm found = "<< evaluatePostfix("100 12 2 - 8 * + 4 /") << " The actual result = 45"<< endl;
    cout << "The algorithm found = "<< evaluatePostfix("2 1 4 2 1 + * 3 + + *") << " The actual result = 32"<< endl;
    cout << "The algorithm found = "<< evaluatePostfix("18 3 / 2 * 13 7 + 5 2 + * +") << " The actual result = 152"<< endl;
    cout << "The algorithm found = "<< evaluatePostfix("2 20 * 2 / 3 4 + 3 2 - * + 6 - 15 +") << " The actual result = 36"<< endl;
    cout << "The actual result are from: https://www.free-online-calculator-use.com/postfix-evaluator.html" << endl;


    return 0;
}
