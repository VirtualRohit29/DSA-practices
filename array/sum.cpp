#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i <= size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
int main(int argc, char const *argv[])
{
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0 ;i<=size; i++){
         cout<<"enter the element :"<<i+1<<endl;
         cin>>arr[i];
    }
 int result = sum(arr,size);
 cout<<"the sum of the given. is ::"<<result<<endl;
    return 0;
}
