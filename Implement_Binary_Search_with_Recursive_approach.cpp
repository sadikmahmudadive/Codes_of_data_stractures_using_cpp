#include <iostream>
using namespace std;
// Recursive binary search function
int binarySearch(int arr[], int left, int right, int target) 
{
    if (right >= left) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) 
        {
            return binarySearch(arr, left, mid - 1, target);
        }
        return binarySearch(arr, mid + 1, right, target);
    }
    return -1; // Element not found
}
int main() 
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, n - 1, target);
    if (result != -1) 
    {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
