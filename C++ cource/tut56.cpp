#include <iostream>
using namespace std;
class Base 
{
    public:
    int var1;
   virtual void display()
    {
        cout<<"display the class variable "<<var1<<endl;
    }
};
class Derived : public Base 
{
    public:
    int var2;
    void display()
    {
        cout<<"Display the class variable 2 "<<var2<<endl;
    }
};
int main()
{
    Base * base_pointer; 
    Base obj_base;
    Derived obj_derived;
    base_pointer=&obj_derived;
    base_pointer ->display();
    return 0;
    }