#include <iostream>
#include <vector>
#include <algorithm> // For reverse function

using namespace std;

void rotateArray(vector<int>& arr, int n) {
    int len = arr.size();
    
    
    n = n % len; // Handle cases where n is greater than the array size
    
    reverse(arr.begin(), arr.end());  // Reverse the whole array
   
    
  
    reverse(arr.begin(), arr.begin() + n);     // Reverse the first 'n' elements
    
   
    reverse(arr.begin() + n, arr.end());   // Reverse the remaining elements
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n ; // Number of positions to rotate
    cout<<"enter the no."<<endl;
    cin>>n;
    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    rotateArray(arr, n);

    cout << "Array after rotating by " << n << " positions: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
