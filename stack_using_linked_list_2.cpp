#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed to the stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow. Cannot pop from an empty stack.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << temp->data << " popped from the stack.\n";
        delete temp;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

    int peek() const {
        if (isEmpty()) {
            cerr << "Error: Stack is empty.\n";
            exit(EXIT_FAILURE);
        }
        return top->data;
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* current = top;
        cout << "Stack: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack myStack;

    int choice, value;

    do {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to push: ";
                cin >> value;
                myStack.push(value);
                break;

            case 2:
                myStack.pop();
                break;

            case 3:
                cout << "Top element: " << myStack.peek() << "\n";
                break;

            case 4:
                myStack.display();
                break;

            case 5:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
