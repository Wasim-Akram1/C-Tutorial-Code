#include <iostream>
using namespace std;
class Number 
{
    int a;
    public:
    Number ()
    {
        a=0;
    }
    Number(int num)
    {
        a=num;
    }
    Number(Number &obj)
    {
        cout<<"Copy Constructor is called ";
        a=obj.a;
    }
    void display()
    {
        cout<<"The Number for the object is "<<a<<endl;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    return 0;

}