#include <iostream>
#include <string>
using namespace std;

void nPatternMatching(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int i, j=1;

    for (i = 0; i < n - m; i++)
    {

        for ( j = 0; j < m; j++)
        {
            if (text[i+j]!= pattern[j])
            {
                break;
            }
        }
        if (j==m)
            {
                cout << "Pattern foud at index :" <<i <<endl;
            }

    }
    cout << "Patern is not found *_*" <<endl;

}

int main()
{
    string text, pattern;
    cout << "Enter the text :";
    getline(cin, text);

    cout << "Enter the pattern :";
    getline(cin, pattern);

    nPatternMatching(text, pattern);
    return 0;
}
