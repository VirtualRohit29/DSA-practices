#include <iostream>
#include <vector>
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

Node *BinaryTree()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    // creating root node
    Node *temp = new Node(x);
    // creating left child
    cout << "enter the left child of " << x << ": ";
    temp->left = BinaryTree();

    // crating right child
    cout << "enter the right child of " << x << ": ";
    temp->right = BinaryTree();
    return temp;
}

// PREORDER Traversal
void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << ": ";
    // visiting left node
    preorder(root->left);
    // visiting right node
    preorder(root->right);
}

// INORDER Traversal
void INorder(Node *root)
{
    if (root == NULL)
        return;

    // visiting left node
    INorder(root->left);
    cout << root->data << ": ";
    // visiting right node
    INorder(root->right);
}
// POSTORDER traversal

void postorder(Node *root)
{
    if (root == NULL)
        return;

    // visiting left node
    postorder(root->left);

    // visiting right node
    postorder(root->right);
    cout << root->data << ": ";
}

// level order traversal
vector<int> levelorder(Node *root)
{

    vector<int> ans;
    if (root == NULL)
        return ans;
    queue<Node *> q;
    q.push(root);
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        // visiting right node
        if (temp->left)
            q.push(temp->left);

        // visiting right node
        if (temp->right)
            q.push(temp->right);
    }
    return ans;
}

// size of a binary treee
int TotalNode(Node *root)
{
    if (root == NULL)
        return 0;
    return (1 + TotalNode(root->left) + TotalNode(root->right));
}

// Sum of Binary Tree

int Total(Node *root)
{
    if (root == NULL)
        return 0;

    return (root->data + Total(root->left) + Total(root->right));
}

// Count leaf Nodes In Binary Tree

int countleaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return 1;
    return (countleaf(root->left) + countleaf(root->right));
}

// count of NonLeaf NOdes

int noncountleaf(Node *root)
{
    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
        return 0;
    return (1 + noncountleaf(root->left) + noncountleaf(root->right));
}

// Height of a Binary Tree

int height(Node *root)
{
    if (root == NULL)
        return 0;

    return (1 + max(height(root->left), height(root->right)));
}
int main(int argc, char const *argv[])
{
    cout << "enter the root value : ";
    Node *root;
    root = BinaryTree();

    cout << "preorder traversal" << ": " << endl;
    preorder(root);
    cout << endl;
    cout << "INorder traversal" << ": " << endl;
    ;
    INorder(root);
    cout << endl;
    cout << "postorder traversal" << ": " << endl;
    postorder(root);
    cout << endl;

    cout << "\nLevel Order traversal: ";
    vector<int> levelOrderResult = levelorder(root);
    for (int val : levelOrderResult)
    {
        cout << val << " ";
    }
    cout << endl;

    // Size of binary tree
    cout << "Size of Binary Tree is: " << TotalNode(root) << endl;

    // Sum of binary tree
    cout << "Sum of Binary Tree is: " << Total(root) << endl;

    // Leaf node count in binary tree
    cout << "Count of leaf nodes in Binary Tree is: " << countleaf(root) << endl;

    // Count of non-leaf nodes
    cout << "Count of non-leaf nodes in Binary Tree is: " << noncountleaf(root) << endl;

    // Height of the binary tree
    cout << "Height of Binary Tree is: " << height(root) << endl;
    return 0;
}
