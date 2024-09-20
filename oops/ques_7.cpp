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

void displayList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next; 
    }
    cout << "NULL" << endl;
}

Node *concatenate(Node *list1, Node *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }

    Node *temp = list1;
    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = list2;
    return list1;
}

int main()
{
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);

    Node *head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = new Node(6);

    cout << "List 1: ";
    displayList(head1);

    cout << "List 2: ";
    displayList(head2);

    Node *concatenatedList = concatenate(head1, head2);

    cout << "Concatenated List: ";
    displayList(concatenatedList);

    return 0;
}
