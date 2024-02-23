#include <iostream>
using namespace std;
class Employee 
{
    int id; 
    static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata (void)
    {
        cout<<"The id of this employee is "<<id<<"and this is employee number "<<count<<endl;
    }
    static void getcount(void)
    {
        cout<<"The value of count is"<<count<<endl;
    }
};
int Employee::count;
int main()
{
Employee wasim, aabid, mahfuz;
/*wasim.id=1;
wasim.count=1; cannot do this as id and count are private*/
wasim.setdata();
wasim.getdata();
Employee::getcount();
aabid.setdata();
aabid.getdata();
Employee::getcount();
mahfuz.setdata();
mahfuz.getdata();
Employee::getcount();
return 0;
}