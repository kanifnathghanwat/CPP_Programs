#include<iostream>
using namespace std;

class Constructor
{
	public:
	int a;
	int b;
	Constructor()
	{
		a=10;
		b=20;
	}
};
int main()
{
	Constructor c;
	cout<<"a: "<<c.a<<endl<<"b: "<<c.b<<endl;
}
