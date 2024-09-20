#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

void insertATstart(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
    return;
}

void display(Node *&head, Node *&tail)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << endl;
}

void insertATtail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (tail == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
    return;
}

void insertAtposition(Node *&head, Node *&tail, int val, int k)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    int count = 1;
    while (count < (k - 1) && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
    new_node->prev = temp;
    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
    return;
}

void deleteAthead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
    }
    else
    {
        head->prev = NULL;
    }
    free(temp);
    return;
}

void deleteAttail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    if (tail == NULL)
    {
        head = NULL;
    }
    else
    {
        tail->next = NULL;
    }
    free(temp);
    return;
}

void delteATposition(Node *&head, Node *&tail, int k)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    int counter = 1;
    while (counter < k && temp != NULL)
    {
        temp = temp->next;
        counter++;
    }
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    free(temp);
    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int choice, operation, val, k;
    cout << "Press any number to continue or 0 to stop" << endl;
    cin >> choice;

    while (choice != 0)
    {
        cout << "enter 1 for display" << endl;
        cout << "enter 2 for insertion at head" << endl;
        cout << "enter 3 for insertion at tail" << endl;
        cout << "enter 4 for insertion at an arbitrary position" << endl;
        cout << "enter 5 for deletion at an head" << endl;
        cout << "enter 6 for deletion at an tail" << endl;
        cout << "enter 7 for deletion at an arbitrary position " << endl;

        cin >> operation;
        switch (operation)
        {
        case 1:
            display(head, tail);
            break;

        case 2:
            cout << "enter the value to be inserted " << endl;
            cin >> val;
            insertATstart(head, tail, val);
            break;

        case 3:
            cout << "enter the value to be inserted " << endl;
            cin >> val;
            insertATtail(head, tail, val);
            break;

        case 4:
            cout << "enter the value to be inserted " << endl;
            cin >> val;
            cout << "enter the position to be inserted" << endl;
            cin >> k;
            insertAtposition(head, tail, val, k);
            break;

        case 5:
            deleteAthead(head, tail);
            display(head, tail);
            break;

        case 6:
            deleteAttail(head, tail);
            display(head, tail);
            break;

        case 7:
            cout << "enter the position to be deleted" << endl;
            cin >> k;
            delteATposition(head, tail, k);
            display(head, tail);
            break;
        }

        cout << "Press any number to continue or 0 to stop" << endl;
        cin >> choice;
    }

    return 0;
}