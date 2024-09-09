#include <iostream>

using namespace std;

int main() 
{
    int arr[100];
    int target;
    int n;

    //for array input
    cout << "Enter the Array size : " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Element " <<i <<": ";
        cin >> arr[i];
    }

    cout << "Enter the number you want to search for: ";
    cin >> target;

    bool found = false;
    int index = -1;

    // Linear search
    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] == target) 
        {
            found = true;
            index = i;
            break;
        }
    }

    if (found) 
    {
        cout << "Element found at index " << index << endl;
    } else 
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
