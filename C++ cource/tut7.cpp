#include <iostream>

using namespace std; 
int c=45;

int main()
{

    // Build in Data Types

    /* int a,b,c;

    cout<<"Enter the number a"<<endl;
    cin>>a;
    cout<<"Enter sthe Number b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"The Result is"<<c<<endl;
    cout<<"Then Global c is"<<::c; */

    //Float, double and long double Literals 

    /* float d=34.4F;
    long double e= 34.4L;

    cout<<"The Size zof 34.4 is"<<sizeof(34.4)<<endl;
    cout<<"The Size zof 34.4f is"<<sizeof(34.4f)<<endl;
    cout<<"The Size zof 34.4F is"<<sizeof(34.4F)<<endl;
    cout<<"The Size zof 34.4l is"<<sizeof(34.4l)<<endl;
    cout<<"The Size zof 34.4L is"<<sizeof(34.4L)<<endl;
    cout<<"The value of d is"<<d<<endl<<"the value of e is"<<e;*/

    //Reference Variables 
    //Wasim Akram--> Ramiz Khan--> Rebbel

    /* float x=455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;*/

    //Type Casting 

    int a=45;
    float b=45.46;
    cout<<"The value of a is"<<(float)a<<endl;
    cout<<"The Valur of b is"<<int(b)<<endl;
    int c= int(b);
    cout<<"The Expression is"<<a+b<<endl;
    cout<<"The Expressuion is"<<a+int(b)<<endl;

    return 0;
}