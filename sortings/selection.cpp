#include<iostream>
using namespace std;
void increase(int arr[], int n)  // selection sorting
{
/*n-1 because  first loop last element ko iterate nahi karega bcz uske  aage comparision ke liye koi element nahi hoga */
      for(int i=0; i<n-1; i++)                             
     {
        int index =i;
         for(int j=i+1; j<n; j++)
         {
            if(arr[j]<arr[index])

            index=j;
         }
        swap(arr[i],arr[index]);
     }                                 
}
int main(int argc, char const *argv[])
{
    int arr[]={9,7,3,1,6};
      int n = sizeof(arr) / sizeof(arr[0]);
      increase(arr,n);

      for(int i=0; i<n; i++)
      {
        cout<<arr[i]<<": ";
      }
    return 0;
}


