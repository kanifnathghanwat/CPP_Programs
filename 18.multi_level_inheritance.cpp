/* Title: Multi-level inheritance
   Developer: Kanifnath Ghanwat
   Date: 17/09/2022
*/
#include <iostream>  
using namespace std;  
class A
{  
   public:  
   void eat() 
   {   
       cout<<"Eating..."<<endl;   
   }    
};  
class B: public A   
{    
    public:  
    void bark()
    {  
        cout<<"Barking..."<<endl;   
    }    
};   
class C: public B  
{    
    public:  
    void weep()
    {  
         cout<<"Weeping...";   
    }    
};   
int main(void) 
{  
    C obj;  
    obj.eat();  
    obj.bark();  
    obj.weep();  
    return 0;  
}  
