#include<iostream>
using namespace std;
class Student
{
	//when we do not give access specifier then by default there is private access and that private members we can use only in that class...

	int rno;
	char name[100];
	double fee;
	
	public:
	Student()
	{
		cout<<"Enter Roll no: ";
		cin>>rno;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter fee: ";
		cin>>fee;
	}
	void display()
	{
		cout<<"\nRoll no: "<<rno<<"\n"<<"Name: "<<name<<"\n"<<"Fee: "<<fee<<endl;
	}
};
int main()
{
	int i;
	Student s[10];
	for(i=0;i<10;i++)
	{
		s[i].display();
	}
	return 0;
}
