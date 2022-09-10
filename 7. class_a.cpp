#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"bca  \n";
    }
};
class b : public a
{
public:
     b()
    {
        cout<<"bcs   \n" ;
    }
    void print()
    {
        printf("print");
    }
};
int main()
{
    b ob;
    ob.print();
}
