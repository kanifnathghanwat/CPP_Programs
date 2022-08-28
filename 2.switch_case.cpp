#include<iostream>
using namespace std;
int main()
{
	int a, b, result;
	char ch;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Choice Operation(+, -, *, /, %): ";
	cin>>ch;
	switch(ch)
	{
		case('+'):cout<<a+b;
		break;
		case('-'):cout<<a-b;
		break;
		case('*'):cout<<a*b;
		break;
		case('/'):cout<<a/b;
		break;
		case('%'):cout<<a%b;
		break;
		default:cout<<"Invalid character...!";
	}
    return 0;
}
