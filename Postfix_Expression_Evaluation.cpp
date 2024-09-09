#include <iostream>
#include <stack>
//#include <cctype>  // for isdigit

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) 
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to evaluate a postfix expression
int evaluatePostfix(const string& postfix) 
{
    stack<int> operandStack;

    for (char c : postfix) 
    {
        if (isdigit(c)) 
        {
            operandStack.push(c - '0');  // Convert character to integer and push onto the stack
        } else if (isOperator(c)) 
        {
            // Pop the top two operands, perform the operation, and push the result back onto the stack
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            switch (c) 
            {
                case '+':
                    operandStack.push(operand1 + operand2);
                    break;
                case '-':
                    operandStack.push(operand1 - operand2);
                    break;
                case '*':
                    operandStack.push(operand1 * operand2);
                    break;
                case '/':
                    operandStack.push(operand1 / operand2);
                    break;
            }
        }
    }

    // The final result should be at the top of the stack
    return operandStack.top();
}

int main() 
{
    string postfixExpression = "23*5+6-9/2";
    int result = evaluatePostfix(postfixExpression);

    cout << "Postfix Expression: " << postfixExpression << endl;
    cout << "Result: " << result << endl;

    return 0;
}