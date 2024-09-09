#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack 
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() 
    {
        top = -1; // Initialize the top of the stack
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push more elements." << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed: " << value << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; ++i) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;

    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
