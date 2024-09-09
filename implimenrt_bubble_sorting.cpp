#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter the element of the array at 'index " << i << "' :";
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "\n Sorted array: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }

    return 0;
    
}
