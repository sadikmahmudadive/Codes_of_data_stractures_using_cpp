#include <iostream>
using namespace std;
 
int main()
{
    //Initializing variable
	char str[100];
	int i, length=0;
    
	//Accepting input
	cout<<"Enter the string:";
	gets(str);

	for(i=0; str[i]!='\0'; ++i)
	{
	length++;
	}
	
    cout <<"The String is : " <<str <<endl;
	cout <<"Length of the string is:" <<length <<endl;
	return 0;
}