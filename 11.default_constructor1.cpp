#include<iostream>
using namespace std;
class Student
{
	//when we do not give access specifier then by default it is private and private members we can use only in class...

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
	Student s;
	s.display();
	return 0;
}
