#include<iostream>
using namespace std;

void print(int arr[][4])
{
    cout<<arr[2][1];

}

int main(int argc, char const *argv[])
{
     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
     print(arr);
    return 0;
}
