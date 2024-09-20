#include <iostream> //insertion sort
using namespace std; 
void increase(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j] < arr[j - 1]) // har round ke every step  me swapping hoga
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            break;
            
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {9, 7, 3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    increase(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ": ";
    }
    return 0;
}