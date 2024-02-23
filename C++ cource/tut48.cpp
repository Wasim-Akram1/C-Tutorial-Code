#include<iostream>
using namespace std;
class Base 
{
int data;
public:
Base(int i)
{
    data=i;
    cout<<"Base class constructor called"<<endl;
}
void printdataBase(void)
{
    cout<<"tHE VALUE OF DATA IS "<<data<<endl;
} 
};
class Base2
{
    int data2;
public:
Base2(int i)
{
    data2=i;
    cout<<"Base class constructor called"<<endl;
}
void printdataBase2(void)
{
    cout<<"tHE VALUE OF DATA IS "<<data2<<endl;
} 
};
class Derived: public Base, public Base2
{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d):Base(a), Base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"derived class constructor is "<<endl;
    }
    void printdataDerived(void)
{
    cout<<"tHE VALUE OF derived1 IS "<<derived1<<endl;
    cout<<"tHE VALUE OF derived2 IS "<<derived2<<endl;
} 
};
int main()
{
    Derived wasim(1,2,3,4);
    wasim.printdataBase();
    wasim.printdataBase2();
    wasim.printdataDerived();
    return 0;
}