#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    bool isEmpty()
    {
        return front == nullptr;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            cout<<"pushed"<<x<<"into the queue\n";
            front = rear= new Node(x);
            
           
            return;
        }

        else
        {
            rear->next = new Node(x);
            cout<<"pushed"<<x<<"into the queue\n";
            rear = rear->next;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"queue underflow\n";
            return;
        }
        else
        {
            cout<<"popped "<<front->data<<" feom the queue\n";
            Node*temp=front;
            front=front->next;
            // If the queue becomes empty after popping
        if (front == nullptr)
        {
            rear = nullptr;
        }
            delete temp;
        }
    }

    int start()
    {
        if(isEmpty())
        {
            cout<<"queue is empty\n";
            return -1;
        }
        else{
            return front->data;

        }
    }
};

int main(int argc, char const *argv[])
{
    Queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    cout<<q.start()<<endl;
    return 0;
}
