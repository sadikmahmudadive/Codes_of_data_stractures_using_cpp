#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int position) 
{
    // Check if the position is valid
    if (position < 0 || position >= size) 
    {
        cout << "Invalid position. Deletion failed." << endl;
        return;
    }

    // Shift elements to the left from the specified position
    for (int i = position; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

void displayArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    displayArray(arr, size);

    int position = 2;
    deleteElement(arr, size, position);

    cout << "Array after deletion: ";
    displayArray(arr, size);

    return 0;
}