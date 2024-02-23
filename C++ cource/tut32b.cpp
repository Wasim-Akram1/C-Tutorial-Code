#include <iostream>
using namespace std;
class Default 
{
    int data1;
    int data2;
    int data3;
    int data4;
    public:
    Default(int a, int b, int c, int d=15)
    {
        data1=a;
        data2=b;
        data3=c;
        data4=d;
    }
    void printData(); 
};
void Default :: printData()
{
    cout<<"The value of Number is" <<data1<<","<<data2<<","<<data3<<"and"<<data4<<endl; 
}
int main()
{
    Default d(5,10,15);
    d.printData();
    return 0;
}