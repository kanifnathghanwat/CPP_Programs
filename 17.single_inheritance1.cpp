/* Title: single inheritance (Members of class A are private and they are not direct accessible        outside that class but they are accessible        indirectly)
   Developer: Kanifnath Ghanwat
   Date: 17/09/2022
*/

#include <iostream>  
using namespace std;  
class A  
{  
	private:
    int a = 4;  
    int b = 5;  
    public:  
    int mul()  
    {  
        int c = a*b;  
        return c;  
    }     
};
  
class B : private A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        cout <<"Multiplication of a and b is : "<<result<< endl;  
    }  
};  
int main()  
{  
    B b;
    b.display();  
    return 0;  
}  
