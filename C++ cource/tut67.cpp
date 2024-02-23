#include <iostream>
using namespace std;
/*template <claas T>
void swapp(t &a, T &b)
{
    T tenp=a;
    a=b;
    b=temp;
}*/
 
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a= funcAverage(5,2.8);
    printf("The average of the number is %f",a);
    return 0;
}