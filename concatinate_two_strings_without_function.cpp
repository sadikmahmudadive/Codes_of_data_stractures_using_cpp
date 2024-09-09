#include<iostream>
using namespace std;

int main()
{
    string s1="Bangladesh University Of ";
    string s2="Business And Technology";
    string concat;
    for(int i=0 ; i<s1.length(); i++)
    {
        concat += s1[i];
    }
    for(int i=0 ; i<s2.length(); i++)
    {
        concat += s2[i];
    }
    cout <<"The concat of the two strings is: " <<concat;
}