#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id=inpId;
        salary=34.0;
    }
    Employee()
    {
    }
};
    class Programmer : Employee
    {
        public:
        int languagecode;
        Programmer(int inpId)
        {
            id=inpId;
            languagecode=9;
        }
        void getData()
        {
            cout<<id<<endl;
        }
    };
int main()
{
    Employee harry(1),Rohan(2);
    cout<<harry.salary<<endl;
    cout<<Rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    skillF.getData();
    return 0;
}