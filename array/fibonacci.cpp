#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{    
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[n];

    //--> creating first two element
    arr[0]=0;
    arr[1]=1;

    for (int i = 2; i < n; i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
      cout<<"the required fiboonaci series is "<<endl;
     for (int i = 0; i <n; i++)
     {
        cout<<arr[i]<<": ";
     }
     
    return 0;
}
