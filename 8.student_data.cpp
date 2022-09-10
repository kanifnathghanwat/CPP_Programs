#include<iostream>
using namespace std;
class Student
{
	public:
	int rno;
	string name;
	
	void getdata();
	void putdata();
};
void Student::getdata()
{
	cout<<"Enter student name: ";
	cin>>name;
	cout<<"Enter student roll number: ";
	cin>>rno;
}
void Student::putdata()
{
	cout<<"Student Data\n";
	cout<<"Student name: "<<name<<"\n";
	cout<<"Student roll number: "<<rno<<"\n";
}
int main()
{
	int i,no;
	cout<<"Number of students: ";
	cin>>no;
	Student s[no];
	for(i=0;i<no;i++)
	{
		s[i].getdata();
		s[i].putdata();
	}
}
