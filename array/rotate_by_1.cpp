#include<iostream>
using namespace std;
   
//--> function for rotate one array 

void rotate1(int arr[],int size){

    int temp=arr[size-1];
    
    

    for (int i = size-2; i >= 0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
     
     for (int i = 0; i < size; i++)
     {
        cout<<arr[i]<<": ";
     }
     

}

int main(int argc, char const *argv[])
{
    int size;
    cout<<"Enter the size "<<endl;
    cin>>size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
         cout<<"enter the element : "<<i+1<<endl;
        cin>>arr[i];
    }
    

    rotate1(arr,size);
    return 0;
}
