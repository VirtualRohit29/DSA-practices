#include <iostream> 
using namespace std; 

int vote(int arr[],int n)
{
    int count=0, target;
    for(int i =0; i<n;i++)
    {    
        if(count==0)
        {
            arr[i]=target;
            count++;
        }
         else if(arr[i]==target)
         {
            count++;
         }
         else
         {
            count--;
            
         }
    }
    cout<<"count is "<<count<<":"<<target<<endl;
    if(count>(n/2)){
        cout<<"winner is "<<target;
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,2,2,2,2,2,3,1};
      int n = sizeof(arr) / sizeof(arr[0]);
      int count,target;
      
      vote(arr,n);
    return 0;
}
