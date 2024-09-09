#include<iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue
{
    private:
    int front; 
    int rear;
    int arr[MAX_SIZE];

    public:
    Queue() : front(-1), rear(-1)
    {

    }
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    bool isFull()
    {
        return rear == MAX_SIZE -1;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full ->Cannot enqueue-_-" <<endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }
        
        arr[rear] = value;
        cout << "Enqueued: " <<value << endl; 
    }

    void dequeue(int value)
    {
        if (isEmpty())
        {
            cout << "Queue is empty ->Cannot dequeue-_-" <<endl;
            return;
        }

        cout << "Dequeued: " <<arr[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int peak()
    {
        if(isEmpty())
        {
            cout << "Queue is Empty. -> No elemnet to peek." << endl;
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Queue myQueue;

    myQueue.enqueue(5);
    myQueue.enqueue(10);
    myQueue.enqueue(15);

    cout << "Front element: " << myQueue.peak() << endl;

    myQueue.dequeue(5);
    myQueue.dequeue(10);
    myQueue.dequeue(15);

    cout << "Is the queue is empty? " << (myQueue.isEmpty() ? "YES" : "NO") << endl;

    return 0;
}