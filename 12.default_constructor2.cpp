#include<iostream>
using namespace std;
class Student
{
	int rno;
	char name[100];
	double fee;

	public:
	Student();
	void display();
};
Student::Student()
{
	cout<<"Enter Roll no: ";
	cin>>rno;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter fee: ";
	cin>>fee;
}
void Student::display()
{
	cout<<"\nRoll no: "<<rno<<"\n"<<"Name: "<<name<<"\n"<<"Fee: "<<fee<<endl;
}
int main()
{
	Student s;
	s.display();
	return 0;
}
