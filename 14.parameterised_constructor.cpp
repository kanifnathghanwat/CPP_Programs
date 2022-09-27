#include<iostream>
using namespace std;
class Car 
{        // The class
    public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) 
    {  // Constructor with parameters
       brand = x;
       model = y;
       year = z;
    }
};

int main() 
{
  // Create Car objects and call the constructor with different values
    Car Obj1("BMW", "X5", 1999);
    Car Obj2("Ford", "Mustang", 1969);

   // Print values
    cout<<Obj1.brand<<" "<<Obj1.model<<" "<<Obj1.year<<"\n";
    cout<<Obj2.brand<<" "<<Obj2.model<<" "<<Obj2.year<<"\n";
    return 0;
}
