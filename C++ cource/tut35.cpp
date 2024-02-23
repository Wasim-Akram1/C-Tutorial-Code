#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num()
    {
        count++;
        cout<<"This is a time when constructor is called for object number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating firstn objects n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more object"<<endl;
        num n1, n2;

    cout<<"Exiting this block"<<endl;
}
cout<<"back to main"<<endl;
return 0;
}