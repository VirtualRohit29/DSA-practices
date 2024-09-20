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