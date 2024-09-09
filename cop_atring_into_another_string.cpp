#include <iostream>
using namespace std;

int main() 
{
    char i, s1[100], s2[100];
    cout << "Enter 1st string : ";
    gets(s1);

    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    cout << "Coiped string is : " <<s2;
    return 0;
}
