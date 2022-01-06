//Gun Kaynar
//22101351

#include "AlgebraicExpression.h"
int pre(char c)
{
    int temp = 0;
    if(c == '+' || c == '-')
        temp = 1;
    else if(c == '*' || c == '/')
        temp = 2;
    else if(c== '^')
        temp = 3;
    else if(c=='(')
        temp = -1;
    return temp;
}


bool isOperator(char c)
{
    if(c == '+' || c == '-' || c == '*' || c == '/' || c=='^')
        return true;
    return false;
}

double Operation(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
    }
    return 0;
}

string infix2postfix(string infix)
{
    Stack s;
    string postfix;
    for(int i = 0; i < infix.length(); i++)
    {
        int in = 0;
        while(isdigit(infix[i])){
            in = 1;
            postfix += infix[i];
            i++;
        }
        if(in == 1){
            postfix += ' ';
        }
        
        if(infix[i] == '('){
            s.push('(');
    }
        else if(isOperator(infix[i])){
            bool found = false;
            do{
                if(s.isEmpty())
                {
                    s.push(infix[i]);

                    found = true;
                }
                else if(s.getTop() == '(')
                {
                    s.push(infix[i]);

                    found = true;
                }
                else if(pre(infix[i]) >= pre(s.getTop())){
                    s.push(infix[i]);

                    found = true;
                }
                else{
                    postfix+=s.getTop();
                    s.pop();
                }
            }while(!found);
        }
           
        else if(infix[i] == ')'){
            while(s.getTop() != '(' && !isdigit(infix[i])){
                postfix += s.getTop();
                s.pop();
            }
            if(s.getTop() == '('){
                s.pop();
            }
        }
    }
    while(!s.isEmpty())
           {
               postfix += s.getTop();
                 s.pop();
           }
    return postfix;
}


string infix2prefix(string infix)
{
    Stack s;
    string prefix;
    reverse(infix.begin(), infix.end());

    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == '(') {
            infix[i] = ')';
        }
        else if (infix[i] == ')') {
            infix[i] = '(';
        }
    }
    for (int i = 0; i < infix.length(); i++) {
        int in = 0;
        while(isdigit(infix[i])){
            prefix += infix[i];
            i++;
            in = 1;
        }
        if(in == 1){
            prefix += ' ';
        }
        if (infix[i] == '(') {
            s.push(infix[i]);
        }
        else if (infix[i] == ')') {
            while ((s.getTop() != '(') && (!s.isEmpty())) {
                prefix += s.getTop();
                s.pop();
            }

            if (s.getTop() == '(') {
                s.pop();
            }
        }
        else if (isOperator(infix[i])) {
            if (s.isEmpty()) {
                s.push(infix[i]);
            }
            else {
                if (pre(infix[i]) > pre(s.getTop())) {
                    s.push(infix[i]);
                }
                else if ((pre(infix[i]) == pre(s.getTop()))
                    && (infix[i] == '^')) {
                    while ((pre(infix[i]) == pre(s.getTop()))
                        && (infix[i] == '^')) {
                        prefix += s.getTop();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
                else if (pre(infix[i]) == pre(s.getTop())) {
                    s.push(infix[i]);
                }
                else {
                    while ((!s.isEmpty()) && (pre(infix[i]) < pre(s.getTop()))) {
                        prefix += s.getTop();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }

    while (!s.isEmpty()) {
        prefix += s.getTop();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}


double evaluateInfix(string infix){
     
    doubleStack values;
     
    Stack ops;
     
    for(int i = 0; i < infix.length(); i++){
         
        if(infix[i] == ' ')
            continue;
        
        else if(infix[i] == '('){
            ops.push(infix[i]);
        }
         
        else if(isdigit(infix[i])){
            int val = 0;
             

            while(i < infix.length() &&
                        isdigit(infix[i]))
            {
                val = (val*10) + (infix[i]-'0');
                i++;
            }
             
            values.push(val);
             
              i--;
        }
         
        else if(infix[i] == ')')
        {
            while(!ops.isEmpty() && ops.getTop() != '(')
            {
                int val2 = values.getTop();
                values.pop();
                 
                int val1 = values.getTop();
                values.pop();
                 
                char op = ops.getTop();
                ops.pop();
                 
                values.push(Operation(val1, val2, op));
            }
             
            if(!ops.isEmpty())
               ops.pop();
        }
         
        else
        {

            while(!ops.isEmpty() && pre(ops.getTop())
                                >= pre(infix[i])){
                int val2 = values.getTop();
                values.pop();
                 
                int val1 = values.getTop();
                values.pop();
                 
                char op = ops.getTop();
                ops.pop();
                 
                values.push(Operation(val1, val2, op));
            }
             
            ops.push(infix[i]);
        }
    }
     

    while(!ops.isEmpty()){
        int val2 = values.getTop();
        values.pop();
                 
        int val1 = values.getTop();
        values.pop();
                 
        char op = ops.getTop();
        ops.pop();
                 
        values.push(Operation(val1, val2, op));
    }
     
    return values.getTop();
}

string postfix2infix(const string postfix)
{
    stringStack infix;


    for (int i=0; postfix[i] != '\0'; i++)
    {
        if (isdigit(postfix[i]))
        {
            string operand = "";
            while(isdigit(postfix[i]))
            {
                operand += postfix[i];
                i++;
            }
            infix.push(operand);
        }
        else if(postfix[i] == ' ')
        {
            continue;
        }
        else
        {
            string str1 = infix.getTop();
            infix.pop();

            string str2 = infix.getTop();
            infix.pop();

            string temp = "(" + str2  + postfix[i]  +str1 + ")";
            infix.push(temp);
        }
    }
    return infix.getTop();
}

double evaluatePostfix(string postfix)
{
    doubleStack stack;
 

 
    for (int i = 0; postfix[i]; i++)
    {
        if(postfix[i] == ' ')continue;
         

        else if (isdigit(postfix[i]))
        {
            int num=0;
             
            while(isdigit(postfix[i]))
            {
            num = num * 10 + (int)(postfix[i] - '0');
                i++;
            }
            i--;
            stack.push(num);
        }
         

        else if(isOperator(postfix[i]))
        {
            int val1 = stack.getTop();
            stack.pop();
            int val2 = stack.getTop();
            stack.pop();
            stack.push(Operation(val2,val1,postfix[i]));

            
        }
    }
    
    return stack.getTop();
}

string prefix2infix(const string prefix)
{
    stringStack infix;

    int length = prefix.size();
    for (int i=length-1; i >= 0; i--)
    {
        if (isdigit(prefix[i]))
        {
            string operand = "";
            while(isdigit(prefix[i]))
            {
                operand += prefix[i];
                i--;
            }
            infix.push(operand);
        }
        else if(prefix[i] == ' ')
        {
            continue;
        }
        else
        {
            string str1 = infix.getTop();
            infix.pop();

            string str2 = infix.getTop();
            infix.pop();

            string temp = ")" + str2  + prefix[i]  +str1 + "(";
            infix.push(temp);
        }
    }
    string a =infix.getTop();
    reverse(a.begin(), a.end());

    return a;
}

double evaluatePrefix( const string prefix ){
    string postfix  = prefix2postfix(prefix);
    return evaluatePostfix(postfix);
}

string prefix2postfix(string prefix ){
    string infix = prefix2infix(prefix);
    return infix2postfix(infix);
}
string postfix2prefix(string postfix ){
    string infix = postfix2infix(postfix);
    return infix2prefix(infix);
}

