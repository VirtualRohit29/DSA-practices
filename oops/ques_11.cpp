#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertATstart(Node *&head, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return;
    }

    Node *tail = head;
    while (tail->next != head)
    {
        tail = tail->next;
    }

    tail->next = new_node;
    new_node->next = head;
    head = new_node;
}

void display(Node *&head)
{
    Node *temp = head;
    cout << "the elemnts in list are :" << endl;
    do
    {
        cout << temp->val << "->";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void checklist(Node* &head){
    Node* temp =head;
    for (int i = 0; i < 15; i++)
    {
       cout<<temp->val<<"->";
       temp= temp->next; 
    } cout<<endl;
    
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    int operation, choice, val;
    do
    {
        cout << "enter 1 for inserting an element in circular list" << endl;
        cout << "enter 2 for displaying an element in circular list" << endl;
        cout << "enter 3 for checking an element in circular list are in a circular fashion" << endl;
        cin >> operation;

        switch (operation)
        {
        case 1:
            cout << "enter the value to be inserted" << endl;
            cin>>val;
            insertATstart(head, val);
            break;

        case 2:
            display(head);
            break;

            case 3:
            checklist(head);

        case 0:
            cout << "Exiting the program." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }
    } while (operation != 0);

    return 0;
}
