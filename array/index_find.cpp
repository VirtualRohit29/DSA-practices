#include <iostream>
using namespace std;
void find(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "the index of target number is :" << i << endl;
           return ; 
        }
        
    }

    // If the loop completes without finding the target, print -1
    cout << "-1" << endl;
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
   
    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        cout << "enter the element :" << i + 1 << endl;
        cin >> arr[i];
    }
    int target;
    cout<<"enter the target no :"<<endl;
    cin>>target;

    find(arr,size,target);
    return 0;
}
