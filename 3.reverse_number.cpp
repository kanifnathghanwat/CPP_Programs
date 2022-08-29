#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter a number: ";
	cin>>no;          //345
	int rev=0, r;
	while(no>0)
	{
		r=no%10;      //5, 4, 3
		rev=rev*10+r; //5, 54, 3
		no=no/10;     //34, 3, 0
	}
	cout<<"Reverse number: "<<rev;
}
