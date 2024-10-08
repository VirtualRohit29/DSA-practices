#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int front, rear, size;

public:
    // constructor
    Queue(int n)
    {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    // queue is full or not
    bool Isfull()
    {
        return (rear + 1) % size == front;
    }

    // queue is empty or not
    bool Isempty()
    {
        return front == -1;
    }

    // pushing eelments

    void push(int x)
    {
        // empty
        if (Isempty())
        {
            cout << "pushed" << x << "into the queue\n";
            front = rear = 0;
            arr[0] = x;
            return;
        }

        // full
        else if (Isfull())
        {
            cout << "Queue overflow\n";
            return;
        }

        // insert
        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            cout << "pushed" << x << "into the queue\n";
        }
    }

    // popping
    void pop()
    {
        if (Isempty())
        {
            cout << "queue underflow\n";
            return;
        }

        //
        else
        {
            if (front == rear)
            {
                cout << "popped" << arr[front] << "into the queue\n";
                front = rear = -1;
            }
            else
            {
                cout << "popped" << arr[front] << "into the queue\n";
                front = (front + 1) % size;
            }
        }
    }

    // start me kaunsa element hai
    int start()
    {
        if (Isempty())
        {
            cout << "queue is empty \n";
            return -1;
        }

        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.pop();
    q.pop();
    q.Isfull();
    return 0;
}
