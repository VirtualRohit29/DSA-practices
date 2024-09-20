#include <iostream>
using namespace std;

int missing(int arr[],int size){
    int sum=0;
    int ans;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];

        //--> sum of n number

         ans = size*(size+1)/2;

    }

    return ans - sum;
    

}
int main(int argc, char const *argv[])
{
    int size;
    cout << "enter the size " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element :" << i + 1 << endl;
        cin >> arr[i];
    }
     

   //---> finding the misssing no..in a given array

   cout<<"the missing no in an array is : "<<missing(arr,size)<<endl;

    return 0;
}
