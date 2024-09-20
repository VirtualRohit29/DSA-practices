#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int arr[] = {10, -1, -2, 5, 4, -3, 1};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int j = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    //--> printing the elements
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ": ";
    }
    cout << endl;

    //---> Finding the smallest positive value
    int ans = 50; // Initialize to a value greater than any possible in the array

    for (int i = j; i < size; i++) { // Iterate only over the positive part
        if (arr[i] > 0 && arr[i] < ans) {
            ans = arr[i];
        }
    }

    cout << "Smallest positive value: " << ans << endl;

    return 0;
}
