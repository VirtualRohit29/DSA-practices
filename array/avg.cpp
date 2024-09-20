#include <iostream>
using namespace std;
//--> AVERAGE OF THE GIVEN NUMBERS

int avg(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i <= size; i++)
    {
        sum += arr[i];
    }
    int avg = sum / 2;
    return avg;
}

int main(int argc, char const *argv[])
{
    int size; 
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        cout<<"enter the element : "<<i+1<<endl;
        cin>>arr[i];

    }
    cout<<"the average of the given numbersn : "<<avg(arr,size)<<endl;
        return 0;
}
