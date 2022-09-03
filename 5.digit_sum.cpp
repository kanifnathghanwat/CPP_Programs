#include<iostream>
using namespace std;
int main()
{
	int no, d, sum=0;
	cout<<"Enter a number: ";
	cin>>no;
	while(no>0)
	{
		d=no%10;
		sum=sum+d;
		no=no/10;
	}
	cout<<sum;
}
