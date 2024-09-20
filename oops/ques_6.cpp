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

void deleteAtBeginning(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

void deleteAtEnd(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (head->next == nullptr)
    {
        delete head;
        head = nullptr; // Set head to nullptr when deleting the only element
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

void deleteAtPosition(Node *&head, int position)
{
    if (head == nullptr)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;
    Node *tempPrev = nullptr;
    for (int i = 0; i < position && temp != nullptr; i++)
    {
        tempPrev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid position." << endl;
        return;
    }

    tempPrev->next = temp->next;
    delete temp;
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
        cout << "Enter 1 for traversal \nEnter 2 for insertion at the beginning \nEnter 3 for insertion at the end \nEnter 4 for insertion at a specific position \nEnter 5 for deletion from the beginning \nEnter 6 for deletion from the end \nEnter 7 for deletion from a specific position \nEnter 0 to exit\n"
             << endl;
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
            deleteAtBeginning(head);
            break;

        case 6:
            deleteAtEnd(head);
            break;

        case 7:
            cout << "Enter the position to delete from: ";
            cin >> position;
            deleteAtPosition(head, position);
            break;

        case 0:
            cout << "Exiting the program." << endl;
            break;
        }


    } while (operation != 0);

    return 0;
}