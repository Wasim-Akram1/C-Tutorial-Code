#include <iostream>
using namespace std;
class Simple 
{
    int data1;
    int data2;
    public:
    Simple(int a, int b=8)
    {
        data1=a;
        data2=b;
    }
    void printData();
};
void Simple :: printData()
{
    cout<<"The value xof Data is "<<data1<<"and"<<data2<<endl;
}
int main()
{
    Simple s(1,5);
    s.printData();
    return 0;
}
