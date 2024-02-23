#include <iostream>
using namespace std;
class Employee 
{
    int id;
    int salary;
    public:
    void setId (void)
{
    salary = 500;
    cout<<"Enter the id of employee ";
    cin>>id;
}
void getId (void)
{
    cout<<"The id of this employee is "<<id<<endl;
}
};
int main()
{
    /*Employee Wasim, Aabid, Wali, Vikash;
    Wasim.setId();
    Wasim.getId();*/

    Employee RK_Construction [4];  
    for (int i=0; i<4; i++)
    {
        RK_Construction[i].setId();
        RK_Construction[i].getId();
    }
    return 0;
}