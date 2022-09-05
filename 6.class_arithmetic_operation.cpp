#include<iostream>
using namespace std;
class base
{
    public:
    int a,b;
    base()
    {
        a=30;
        b=20;
    }
    void add()
    {
        cout<<"Adition is= "<<a+b<<endl;
    }
    void mul()
    {
        cout<<"Multiplication is= "<<a*b<<endl;
    }
};
class child:public base
{
    public:
    void div()
    {
        cout<<"Division is= "<<a/b<<endl;
    }
    void mod()
    {
        cout<<"Modulos is= "<<a%b<<endl;
    }
};
int main()
{
    base s1;
    child s2;
    s2.add();
    s2.mul();
    s2.div();
    s2.mod();
}
