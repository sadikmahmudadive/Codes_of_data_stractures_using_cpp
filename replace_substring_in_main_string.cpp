#include <iostream>
#include <string>

using namespace std;
// Function to replace a sub-string in the main string
string replaceSubstring(string mainStr, int startIndex, int length, string replacementStr) 
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

    // Append the characters before the sub-string to be replaced
    for (int i = 0; i < startIndex; ++i) 
    {
        resultStr += mainStr[i];
    }

    // Append the replacement substring
    resultStr += replacementStr;

    // Append the characters after the sub-string to be replaced
    for (int i = startIndex + length; i < mainStr.length(); ++i) 
    {
        resultStr += mainStr[i];
    }
    return resultStr;
}

int main() 
{
    string mainStr, replacementStr;
    int startIndex, length;

    cout << "Enter the main string: ";
    cin >> mainStr;

    cout << "Enter the start index of the sub-string to replace (0-based index): ";
    cin >> startIndex;

    cout << "Enter the length of the sub-string to replace: ";
    cin >> length;

    cout << "Enter the replacement sub-string: ";
    cin >> replacementStr;

    string modifiedStr = replaceSubstring(mainStr, startIndex, length, replacementStr);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
