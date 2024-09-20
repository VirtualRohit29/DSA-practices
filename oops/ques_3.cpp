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

Node* reverse(Node* &head)
{

    Node *curr_ptr = head;
    Node *prev_ptr = NULL;

    while (curr_ptr != NULL)
    {
        Node *next_ptr = curr_ptr->next;
        curr_ptr->next = prev_ptr;
        prev_ptr = curr_ptr;
        curr_ptr = next_ptr;
    }

    Node* new_head = prev_ptr;
    return new_head;
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

    int choice, operation, position;

    do
    {
        cout << "Enter 1 for traversal \nEnter 2 for insertion at the beginning \nEnter 3 for insertion at the end \nEnter 4 for insertion at a specific position  \nEnter 0 to exit"
             << endl;
        cout << "enter 5 for reverse" << endl;
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
        cout<<"reverse list will be -->"<<endl;
            head=reverse(head);
            printList(head);
            break;

        case 0:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (operation != 0);

    return 0;
}