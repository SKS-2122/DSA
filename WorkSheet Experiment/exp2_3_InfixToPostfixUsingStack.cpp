#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    else
        return false;
}
int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string InfixToPostfix(stack<char> s, string
                                         infix)
{
    string postfix;
    for (int i = 0; i < infix.length(); i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' &&
                                                     infix[i] <= 'Z'))
            postfix += infix[i];
        else if (infix[i] == '(')
            s.push(infix[i]);
        else if (infix[i] == ')')
        {
            while ((s.top() != '(') && (!s.empty()))
            {
                char temp = s.top();
                postfix += temp;
                s.pop();
            }
            if (s.top() == '(')
                s.pop();
        }
        else if (isOperator(infix[i]))
        {
            if (s.empty())
                s.push(infix[i]);
            else
            {
                if (precedence(infix[i]) > precedence(s.top()))
                    s.push(infix[i]);
                else if ((precedence(infix[i]) == precedence(s.top())) && (infix[i] == '^'))
                    s.push(infix[i]);
                else
                {
                    while ((!s.empty()) && (precedence(infix[i]) <= precedence(s.top())))
                    {
                        char temp = s.top();
                        postfix += temp;
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}
int main()
{
    string infix, postfix;
    cout << "Enter a infix expression : "<<endl; 
    cin>>infix;
    stack<char> s;
    cout << "INFIX EXPRESSION:" << infix << endl;
    postfix = InfixToPostfix(s, infix);
    cout << endl<< "POSTFIX EXPRESSION:" << postfix;
    return 0;
}
/*step 1:start 
step 2:loop i=0 to i<infix.length, 
charc=infix. 
step 3:else if c->’(‘,’{‘,’[‘ push to stack. 
step 4:else if c->’)’,’}’,’]’ then pop & print stack till stack get empty or ’(‘,’{‘,’[‘ is found and 
pop’(‘,’{‘,’[‘. 
step 5:else if c->operator(+,-,*,/)then 
step 6:if stack ->empty then push c on stack. 
step 7:while stack->(!empty)&&prece(infix[i]<=prece(stack.top()),then pop and print 
stack. 
Step 8:push current operator on stack. (End of for loop) 
Step 9:pop and print remaining operator in stack. 
Step 10:end.*/