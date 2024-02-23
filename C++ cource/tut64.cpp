#include <iostream>
using namespace std;
template <class t>
class vector{
    public:
    t *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr=new t[size];
    }
    t dotProduct(vector &v){
        int d=0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <double> v1(3);
    v1.arr[0]=4.5;
    v1.arr[1]=3.5;
    v1.arr[2]=2.5;
    vector <double> v2(3);
    v2.arr[0]=1.5;
    v2.arr[1]=2.5;
    v2.arr[2]=5.5;
    double a=v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}