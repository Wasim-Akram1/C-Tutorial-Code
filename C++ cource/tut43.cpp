#include <iostream>
using namespace std;
class Base1 
{
    public:
    void greet()
    {
        cout<<"How are you "<<endl;
    }
};
class Base2
{
    public:
    void greet()
    {
        cout<<"Kaise ho "<<endl;
    }
};
class Derived: public Base1, public Base2
{
    int a;
    public:
    void greet()
    {
        Base2::greet();
    }
};
class B
{
    public:
    void say()
    {
        cout<<"Hellow world"<<endl;
    }
};
class D: public B
{
    public: 
    int a;
    void say()
    {
        cout<<"Hellow my beautiful people "<<endl;
    }
};
int main()
//{
   /* Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
}*/
{
    B b;
    b.say();
    D d;
    d.say();
    return 0;
}
