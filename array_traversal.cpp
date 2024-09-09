/*]
//method 1 (using fuction)
#include <iostream>
using namespace std;

void traverseArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array elements: ";
    traverseArray(arr, size);
    
    return 0;
}
*/

//method 2 (without function)
#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i<size; i++)
    {
        cout << "The array elements are : " << arr[i] << endl;
    }
    return 0;
}