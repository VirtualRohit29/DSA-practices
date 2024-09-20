#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtBeginning(Node *&head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(Node *&head, int data, int position)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < position - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid position." << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}
void searchATposition(Node* &head, int pos){
    Node* temp = head;
    int counter = 1;
    while (counter!=pos)
    {
        temp=temp->next;+
        counter++;
    }

    cout<<"the data will be "<<temp->data<<"->"<<endl;
    
    
}

int main()
{
    Node *head = nullptr;
    int value;

    // Adding 5 elements to the linked list
    for (int i = 1; i <= 5; i++)
    {
        insertAtEnd(head, i * 10);
    }

    int choice, operation, position,pos;

    do
    {
        cout << "Enter 1 for traversal \nEnter 2 for insertion at the beginning \nEnter 3 for insertion at the end \nEnter 4 for insertion at a specific position  \nEnter 0 to exit\n"
             << endl;
             cout<<"enter 5 for search at any position"<<endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "Linked List: ";
            printList(head);
            break;

            case 2:
            cout << "Enter the value to insert at the beginning: ";
            cin >> value;
            insertAtBeginning(head, value);
            break;

        case 3:
            cout << "Enter the value to insert at the end: ";
            cin >> value;
            insertAtEnd(head, value);
            break;

        case 4:
            cout << "Enter the value to insert: ";
            cin >> value;
            cout << "Enter the position to insert at: ";
            cin >> position;
            insertAtPosition(head, value, position);
            break;

             case 5:
            cout << "Enter the position to be serach: ";
            cin >> pos;
            searchATposition(head, pos);

            break;
        }
    }while (operation != 0);

    return 0;

    
}