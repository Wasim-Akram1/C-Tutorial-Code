#include<iostream>
using namespace std;
class Base1
{
    protected:
    int base1int;
    public: 
    void set_base1int(int a)
    {
        base1int= a;
    }
};
class Base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int=a;
    }
};
class Derived : public Base1, public Base2
{
    public:
    void show()
    {
        cout<<"the value of base 1 is: "<<base1int<<endl;
        cout<<"the value of base 2 is: "<<base2int<<endl;
        cout<<"the sum of bas1 &base 2 is: "<<base1int+base2int<<endl;
    }
};
int main()
{
    Derived Wasim;
    Wasim.set_base1int (18);
    Wasim.set_base2int (20);
    Wasim.show();
    return 0;
}