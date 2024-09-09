#include <iostream>
#include <string>

using namespace std;

// Function to insert a substring into the main string at a given index
string insert_Substring(string mainStr, string subStr, int index) 
{
    // Check if the index is valid
    if (index < 0 || index > mainStr.length()) 
    {
        cout << "Invalid index! You need to put index between -> 0 to " <<index <<"\n";
        return mainStr;
    }

    // Create a new string to store the result
    string resultStr = "";

    // Append the characters before the insertion point
    for (int i = 0; i < index; ++i) 
    {
        resultStr += mainStr[i];
    }

    // Append the substring to be inserted
    for (int i = 0; i < subStr.length(); ++i) 
    {
        resultStr += subStr[i];
    }

    // Append the characters after the insertion point
    for (int i = index; i < mainStr.length(); ++i) 
    {
        resultStr += mainStr[i];
    }

    return resultStr;
}

int main() 
{
    string mainStr, subStr;
    int index;

    cout << "Enter the main string: ";
    //cin >> mainStr;
    getline(cin, mainStr);

    cout << "Enter the substring to insert: ";
    //cin >> subStr;
    getline(cin, subStr);

    cout << "Enter the index where to insert the substring (0-based index): ";
    cin >> index;

    string modifiedStr = insert_Substring(mainStr, subStr, index);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
