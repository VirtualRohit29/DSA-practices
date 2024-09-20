#include<iostream>
using namespace std;

void printmax(int arr[][4], int row, int col)
{
    int sum = INT32_MIN;
        int index = -1;
    for (int j = 0; j < col; j++)
    {
        
        
        for (int i = 0; i < row; i++) // Corrected the loop condition from j<row to i<row
        {
            int total = 0; // Reset sum for each row
            total += arr[i][j];
            if (total > sum)
            {
                sum = total;
                index = i;
            }
        }
        
    }
   cout << "The row that gives max sum is: " <<index<< endl; 
}

int main(int argc, char const *argv[])
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printmax(arr, 3, 4);
    return 0;
}
