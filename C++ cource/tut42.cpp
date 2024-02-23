//Need more improvement 
#include <iostream>
using namespace std;
class SimpleCalculator
{
    float a, b;
    public:
    void result()
    {
        cout<<"Enter the first Number: "<<a<<endl;
        cout<<"Enter the second Number: "<<b<<endl;
    }
    float add()
    {
        return a+b;
    }
    float sub()
    {
        return a-b; 
    }
    float mul()
    {
        return a*b;
    }
    float div()
    {
        if (b==0)
        {
            cout<<"Division by zero: "<<endl;
            return 1;
        }
        else 
        {
            return a/b;
        }
    }
};
class SynatificCalculator : public SimpleCalculator 
{
    float a, b, m;
    public:
    void result()
    {
        cout<<"Enter the first number: "<<a<<endl;
        cout<<"Enter the second number: "<<b<<endl;
        cout<<"Enter the power m: "<<m<<endl;
    }
    float percent()
    {
        return a*b/m;
    }
};
int main()
{
    int ch;
    SimpleCalculator sc;
    SynatificCalculator scc;
    cout<<"Enter 1 to add "<<endl;
    cout<<"Enter 2 to subtract  "<<endl;
    cout<<"Enter 3 to multiply "<<endl;
    cout<<"Enter 4 to divide "<<endl;
    cout<<"Enter 5 for percentage"<<endl;
    do
    {
        cout<<"Enter Choice: "<<ch<<endl;
        switch (ch)
        {
            case 1:
            sc.result();
            cout<<"Result: "<<sc.add()<<endl;
            break;
            case 2:
            sc.result();
            cout<<"Result: "<<sc.sub()<<endl;
            break;
            case 3:
            sc.result();
            cout<<"Result: "<<sc.mul()<<endl;
            break;
            case 4:
            sc.result();
            cout<<"Result: "<<sc.div()<<endl;
            break;
            case 5:
            scc.result();
            cout<<"Result: "<<scc.percent()<<endl;
            break;
        }
    }
    while (ch>=1 && ch <=4);
    return 0;
}