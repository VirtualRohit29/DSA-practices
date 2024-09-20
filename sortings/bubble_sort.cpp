#include <iostream> // bubble sort
using namespace std;
void increase(int arr[], int n)
{
    for (int i = n - 2; i >= 0; i--) // because Ist round me  code 3 barr chalega , 2nd round me 2 and so on ...
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // har round ke every step  me swapping hoga 
            {
                swap(arr[j], arr[j + 1]);
            }
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