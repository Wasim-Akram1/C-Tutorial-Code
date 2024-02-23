#include <iostream>
using namespace std; 
int main ()
{

    //What is Pointer?-------> data type which holds the address of other data types 
    int a=3;
    int * b;
    b=&a;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the adress of a is"<<b<<endl;
    cout<<"the value of address b is"<<*b<<endl;
    //&-----> (Address of) Operator 
    //*-----> Dereference Operator

    //Pointer to pointer 
    int ** c=&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of b is"<<c<<endl;
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at address value_at (value_at (c))is"<<**c<<endl;

    return 0;
}