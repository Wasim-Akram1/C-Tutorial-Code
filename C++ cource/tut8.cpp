#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   /*int a=34;
    cout<<"The value of a was:"<<a;
    a=45;
    cout<<"The Value of a is:"<<a;*/
   
    //Constant in C++ 
   /*const int a= 3;
    cout<<"The value of a was:"<<a<<endl;
    a=45; // a is constant so we will get error
    cout<<"The Value of a is:"<<a<<endl;*/

    //Manipulator in C++
    /*int a=17, b=18, c=7;
    cout<<"The Value of a with set w is:"<<a<<endl;
    cout<<"The Value of b with set w is:"<<b<<endl;
    cout<<"The Value of c with set w is:"<<c<<endl;

    cout<<"The Value of a is:"<<setw(4)<<a<<endl;
    cout<<"The Value of b is:"<<setw(4)<<b<<endl;
    cout<<"The Value of c is:"<<setw(4)<<c<<endl;-*/

    //Operator Precedence 
    int a=3, b=4;
    //int c=(a*5)+b;
    int c= ((((a*5)+b)-45)+87); 
    cout<<c;
    return 0;
}