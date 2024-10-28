#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main(int argc, char const *argv[])
{
    int x;
    cout << "enter the root element : ";
    cin >> x;
    int first;
    int second;

    queue<Node *> q;
    Node *root = new Node(x);
    q.push(root);

    // Build the binary tree

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << " Enter the left child  of " << temp->data << " : ";
        cin >> first; // left node ki value

        if (first != -1) // left side
        {

            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout << " Enter the right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1) // right side
        {

            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    return 0;
}
 /*
       1
    2      3
  4   5  6    7
                */