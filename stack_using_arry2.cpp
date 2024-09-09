#include<iostream>
#define n 100

using namespace std;

class stack
{
    int* arr;
    int top;

    public:
    stack()
    {
        arr=new int[n];
        top= -1;
    }

    void push(int x)
    {
        if (top == n-1)
        {
            cout << "Stack overflow -_-" << endl;
            return;
        }
        
        top++;
        arr[top]=x;
    }

    void pop()
    {
        if (top == n-1)
        {
            cout << "No element to POP :(" << endl;
            return;
        }
        
        top--;
    }

    int Top()
    {
        if (top == n-1)
        {
            cout << "No elements in stack" << endl;
            return -1;
        }
        
        return arr[top];
    }

    bool empty()
    {
        return top== -1;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top most element is: " <<st.Top() <<endl;

    st.pop();
    cout << "Top most element after pop is: " <<st.Top() <<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout <<st.empty() <<endl;

    return 0;
}