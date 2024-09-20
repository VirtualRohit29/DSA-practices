#include <iostream>
using namespace std;
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
     //--> largest no. in array
    int ans=INT32_MIN;
     for (int i = 0; i < size; i++)
    {
       if(arr[i]>ans){
        ans= arr[i];
       }
    }



    //--> second largest number in an array 

    int second = INT32_MIN;
     for (int i = 0; i < size; i++)
    {
        if(arr[i]!=ans){
            second=max(second,arr[i]);
        }
    } 

    cout<<"largest no. in an array :"<<ans<<endl;
    cout<<"second largest no. in an array :"<<second<<endl;
    return 0;
}
