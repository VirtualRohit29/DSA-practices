#include<iostream>
using namespace std;
struct node{
     int data;
     node *link;
};
int main(){
    node *first,*last,*temp;
    int n,val;
    cout<<"Enter the total element in the list"<<endl;
    cin>>n;
    first = new node;
    cout<<"Enter the value of element 1"<<endl;
    cin>>first->data;
    first->link = NULL;
    temp = first;
    for(int i = 1; i<n; i++){
        last = new node;
        cout<<"Enter the value of element "<<i+1<<endl;
        cin>>last->data;
        last->link = NULL;
        temp->link = last;
        temp = last;
    }

    temp = first;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
    cout<<"Enter the value from where you want to split"<<endl;
    cin>>val;
    temp = first;
    cout<<"Here is your first part"<<endl;
   while(temp->data!=val){
      cout<<temp->data<<" ";
      temp = temp->link;
   }
   cout<<temp->data<<endl;
   temp=temp->link;
   // cout<<endl;
    cout<<"Here is you second part"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    return 0;
}