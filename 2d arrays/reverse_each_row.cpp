#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int start=0, end=3, row=3;
    for(int i=0; i <row; i++)
    {
        start=0; end=3;
        while(start<end)
        {
            swap (arr[i][start],arr[i][end]);
            start++,end--;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr[i][j]<<": ";
        }
    }
    return 0;
}
