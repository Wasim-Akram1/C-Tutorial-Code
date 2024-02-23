#include <iostream>

//There are two type of Header Files:
//1.System Header files:- It comes with the compiler 
//2.User Defined Header Files: It is written by the programmer 
// #include "this.h" //--> This will produce an Error if this.h is no present in the current directory  

using namespace std;
int main ()
{
    int a=4, b=5;
    cout<<"Opersators in c++"<<endl;
    cout<<"Following are the types of Opersators in c++"<<endl;

//Arithmatic Operators 

cout<<"The valur of a+b is"<<a+b<<endl;
cout<<"The valur of a-b is"<<a-b<<endl;
cout<<"The valur of a*b is"<<a*b<<endl;
cout<<"The valur of a/b is"<<a/b<<endl;
cout<<"The valur of a%b is"<<a%b<<endl;
cout<<"The valur of a++ is"<<a++<<endl;
cout<<"The valur of a-- is"<<a--<<endl;
cout<<"The valur of ++a is"<<++a<<endl;
cout<<"The valur of --a is"<<--a<<endl;

//Assignment Operators --> used to assign value to variable 
//int a=3, b=9;
//char D='d';
//Comparison Operators 

cout<<"The Following are the comparison operators in c++"<<endl;
cout<<"The valur of a==b is"<<(a==b)<<endl;
cout<<"The valur of a!=b is"<<(a!=b)<<endl;
cout<<"The valur of a>=b is"<<(a>=b)<<endl;
cout<<"The valur of a<=b is"<<(a<=b)<<endl;
cout<<"The valur of a<b is"<<(a<b)<<endl;
cout<<"The valur of a>b is"<<(a>b)<<endl; 

//Logical Operators 

cout<<"Following are the type of Logical operator in c++"<<endl;
cout<<"The valur of this Logical and Operator((a==b) && (a<b)) is:"<<((a==b) && (a<b)) <<endl;
cout<<"The valur of this Logical or Operator((a==b) || (a<b)) is:"<<((a==b) || (a<b)) <<endl;
cout<<"The valur of this Logical not Operator(!(a==b)) is:"<<(!(a==b)) <<endl;
    return 0;
}