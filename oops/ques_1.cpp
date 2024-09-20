#include <iostream>
using namespace std;

// code start here .
// first operations traversing
void printarray(int arr[], int size)
{
    int index = 0;
    while (index < size)
    {
        cout << "Index " << index << " : " << arr[index] << endl;
        index++;
    }
}

// second operation insertion
void insertarray(int arr[], int &size) // Pass size by reference to update it in the main function
{
    int key, pos, i;
    cout << "\nEnter element to be inserted: ";
    cin >> key;

    cout << "Enter the position: "; // position specified
    cin >> pos;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid position. Insertion failed." << endl;
        return;
    }

    for (i = size - 1; i >= pos; i--)
        arr[i + 1] = arr[i];

    arr[pos] = key;

    // Display new array
    cout << "New Array after Insertion:\n";
    size++; // Increase size after insertion
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// 3rd operation deletion

void deletearray(int arr[], int &size) // Pass size by reference to update it in the main function
{
    int i, key, count = 0;
    cout << "\nEnter element to be deleted: ";
    cin >> key;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            for (int j = i; j < (size - 1); j++)
            {
                arr[j] = arr[j + 1];
            }

            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "\nElement not found..!!\n";
    }
    else
    {
        cout << "\nElement deleted successfully..!!\n";

        // Display new array
        cout << "New Array after Deletion:\n";
        size--; // Decrease size after deletion
        for (i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}

// 4th operation searching

void searcharray(int arr[], int size)
{
    int i, num;
    cout << "Enter number to find its position: ";
    cin >> num;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            cout << "\nIndex of " << num << " is " << i << endl;
            return; // No need to continue searching if found
        }
    }

    cout << "\nElement not found..!!\n";
}

int main()
{
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i + 1 << ": " << endl;
        cin >> arr[i];
    }

    int choice, operation;
    cout << "Press any number to implement above operations and 0 to stop " << endl;
    cin >> choice;
    while (choice != 0)
    {
        cout << "Enter 1 for traversal \nEnter 2 for insertion \nEnter 3 for deletion\nEnter 4 for searching\n" << endl;
        cin >> operation;
        cout << endl;
        switch (operation)
        {
        case 1:
            printarray(arr, size);
            break;

        case 2:
            insertarray(arr, size);
            break;

        case 3:
            deletearray(arr, size);
            break;

        case 4:
            searcharray(arr, size);
            break;
        }

        cout << "Press any number to continue or 0 to stop" << endl;
        cin >> choice;
    }

    return 0;
}