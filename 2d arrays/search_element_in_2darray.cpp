#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x = 7;
    for(int i=0; i<3; i++)
    {
        
        for(int j=0; j<4; j++)
        {
            if(arr[i][j]==x)
            {
                cout<<"the element is found"<<endl;
               return 0;
            }
            
        }
    }
    cout<<"no";
    return 0;
}
