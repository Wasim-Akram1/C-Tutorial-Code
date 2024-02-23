#include <iostream>
using namespace std;
template <class t1=int , class t2=float , class t3=char >
class wasim 
{
    public:
    t1 a;
    t2 b;
    t3 c;
    wasim(t1 x, t2 y, t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main()
{
    wasim<> w(4, 6.4, 'c');
    w.display();
    cout<<endl;
    wasim<float, char, char> a(1.6, 'o','c');
    a.display();
    return 0;
}