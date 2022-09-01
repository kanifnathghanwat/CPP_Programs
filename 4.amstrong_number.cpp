#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int no, no1, sum=0,rem, temp, len=0;
	cout<<"Enter a number: ";
	cin>>no;
	no1=temp=no;
	while((no)>0)
	{
		len=len+1;
		no=no/10;
	}
	while(no1>0)
	{
		rem=no1%10;
		sum=sum+(pow(rem, len)) ;
		no1=no1/10;
	}
	if(temp==sum)
	{
		cout<<temp<<" is Armstrong number";
	}
    else
	{
		cout<<temp<<" is not Armstrong number";
	}
}
