#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int position) 
{
    // Check if the array is already full
    if (size >= 100) 
    {
        cout << "Array is full. Cannot insert element." << endl;
        return;
    }

    // Shift elements to the right from the specified position
    for (int i = size - 1; i >= position; i--) 
    {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[position] = element;

    // Increase the size of the array
    size++;
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
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array: ";
    displayArray(arr, size);

    int element = 10;
    int position = 2;
    insertElement(arr, size, element, position);

    cout << "Array after insertion: ";
    displayArray(arr, size);

    return 0;
}
