#include<iostream>
using namespace std;

void subString(string str, int start, int length)
{
    string substrin1;
    int j;
    for (j=0; str[start]!='\0'; j++)
    {
        substrin1[j]=str[start];
        start++;
        length--;
    }
    substrin1[j]='\0';

    for(j=0 ;substrin1[j]!='\0' ;j++)
    {
        cout<< substrin1[j];
    }
}

int main()
{
    string str;
    int start, length;
    cout <<"Enter the substring : " <<endl;
    cin >> str;
    cout <<"Enter the start point index of substring : " <<endl;
    cin >> start;
    cout <<"Enter the length of substring : " <<endl;
    cin >> length;
    subString(str, start, length);
}