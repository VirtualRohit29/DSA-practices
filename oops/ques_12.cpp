#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

class stack
{
    Node *head;
    int capacity;
    int currsize;
    stack(int c)
    {
        this->capacity = c;
        this->currsize = 0;
        head = NULL;
    }

    bool isEmpty()
    {
        return this->head = NULL;
    }

    bool isFull()
    {
        return this->currsize = this->capacity;
    }

    void push(int data)
    {
        if (this->currsize == this->capacity)
        {
            cout << "over flow " << endl;
            return;
        }

        Node *new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currsize++;
    }

    void pop(){
        if(this->head= NULL){
            cout<<"underflow\n";
            return;
        }

        Node* new_head = this->head->next;
        this->head->next=NULL;

        Node* temp=this->head;
        
    }
};
