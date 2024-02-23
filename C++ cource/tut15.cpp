#include <iostream>
using namespace std;

//Function Prototype
//type function-name (argument);
//int sum(int a, int b)---->>Acceptable 
//int sum(int a, b)------->>Not Acceptable 
int sum (int, int);//--->>Acceptable
void g (void);
int main()
{
    int num1, num2;
    cout<<"Enter dthe first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    //Num1 and Num2 are actual parameters 
    cout<<"The sum is "<<sum(num1,num2);
    g();
    
    return 0;  
}
int sum (int a, int b)
//Formal Parameters a and b will be taking value from actual parameter num1 and num2
{
    int c=a+b;
    return c;
}
void g ()
{
    cout<<"Hellow, Good Morning";
}