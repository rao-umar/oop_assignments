// This is Palindrome program

#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string:";
	cin>>str;
	cout<<"Entered string is:"<<str<<endl;
	cout<<"-----------------------"<<endl;
	cout<<endl;
	int length=0;
	for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    cout<<length;
	for(int i=0; i<length/2; i++)
	{
		if(str[i]!=str[length-i-1])
		{
			cout<<"Not  Palindrome";
			return false;
		}
	}
	cout<<"Palindrome";

}
