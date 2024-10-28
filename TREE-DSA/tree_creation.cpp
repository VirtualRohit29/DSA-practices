#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*left,*right;

    Node(int val)
    {
        data=val;
        left = right=NULL;
    }
};

Node* BinartTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;
    Node*temp=new Node(x);
    // left side
    cout<<"enter the left child of "<<x<<" :";
    temp->left=BinartTree();

    // right side 
    cout<<"enter the right child of "<<x<<" :";
    temp->right=BinartTree();
    return temp;

}


int main(int argc, char const *argv[])
{
 cout<<"enter the root node : ";
 Node*root;
 root=BinartTree();
    
}
  // try these 
/*
                1
             2     20
           3
         4   5                 */
