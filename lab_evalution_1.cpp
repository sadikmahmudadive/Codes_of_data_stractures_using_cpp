#include <iostream>
#include <string>

using namespace std;

// Function to delete a sub-string from the main string
string deleteSubstring(string mainStr, int startIndex, int length) 
{
    // Check if the startIndex is valid
    if (startIndex < 0 || startIndex >= mainStr.length()) 
    {
        cout << "Invalid start index!";
        return mainStr;
    }

    // Check if the length is valid
    if (length < 0 || startIndex + length > mainStr.length()) 
    {
        cout << "Invalid length!";
        return mainStr;
    }

    // Create a new string to store the result
    string resultStr = "";

    // Append the characters before the sub-string to be deleted
    for (int i = 0; i < startIndex; ++i) 
    {
        resultStr += mainStr[i];
    }

    // Append the characters after the sub-string to be deleted
    for (int i = startIndex + length; i < mainStr.length(); ++i) 
    {
        resultStr += mainStr[i];
    }

    return resultStr;
}

int main() {
    string mainStr;
    int startIndex, length;

    cout << "Enter the main string: ";
    getline(cin, mainStr);

    cout << "Enter the start index of the sub-string to delete (0-based index): ";
    cin >> startIndex;

    cout << "Enter the length of the sub-string to delete: ";
    cin >> length;

    string modifiedStr = deleteSubstring(mainStr, startIndex, length);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
