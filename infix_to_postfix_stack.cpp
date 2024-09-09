#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int getPrefix(char op)
{
    if(op == '+' || op ==  '-')
    return 1;
    else if (op == '*' || op == '/')
    return 2;
    return 0;
}

string infix_to_postfix(const string& infix)
{
    stack<char> operatorStack;
    string postfix;

    for (char c : infix)
    {
        if(isalnum(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            operatorStack.push(c);
        }
        else if(c == ')')
        {
            while (!operatorStack.empty() &&  operatorStack.top())
            {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.pop();
        }
        else if(isOperator(c))
        {
            while (!operatorStack.empty() &&  getPrefix(operatorStack.top()) >= getPrefix(c))
            {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }
    while (!operatorStack.empty())
    {
        postfix += operatorStack.top();
        operatorStack.pop();
    }
    return postfix;
}

int main()
{
    string infixExpression;

    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);
    
    string postfixExpression = infix_to_postfix(infixExpression);

    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}