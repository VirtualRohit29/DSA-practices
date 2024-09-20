#include<iostream>
using namespace std;

void printdiagonal(int arr[][4],int row , int col)
{
   int first =0; // store the ist diagobnal sum
   int second = 0; // store the second diagonal

   int i=0;
   while (i<row)
   
   {
    first+=arr[i][i];
    i++;
   }

  i=0;
  
   int j=col-1;
   while(i<row)
   {
    second+=arr[i][j];
    i++; j--;
   }
   
   cout<<first<<"  ::  "<<second<<endl;

}

int main(int argc, char const *argv[])
{
     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
     printdiagonal(arr,3,4);
    return 0;
}
