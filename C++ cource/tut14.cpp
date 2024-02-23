#include <iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}ep;
union money 
{
    int rice;
    int car;
    float pounds;
};
 int main()
{
    enum Meal{breakfast, lunch, dinner}; 
    Meal m1= lunch;
    cout<<(m1==1);

    /*cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;*/
   /*ep wasim; 
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.car<<endl;*/
   /*struct employee shubham;
    struct employee rohandas;
    wasim.eid=1;
    wasim.favchar='c';
    wasim.salary=12000000;
    cout<<"The value is"<<wasim.eid<<endl;
    cout<<"The value is"<<wasim.favchar<<endl;
    cout<<"The value is"<<wasim.salary<<endl;*/
    return 0;
}