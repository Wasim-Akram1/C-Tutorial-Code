#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int* ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    float *p= new float(40.78);
    cout<<"the value of p is "<<*(p)<<endl;
    int *arr =new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    delete[] arr;
    cout<<"the value of arr is "<<arr[0]<<endl;
    cout<<"the value of arr is "<<arr[1]<<endl;
    cout<<"the value of arr is "<<arr[2]<<endl;

    return 0;
}