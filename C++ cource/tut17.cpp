#include<iostream>
using namespace std;
 inline int product (int a,int b)
 { 

 //static int c=0;  //This execute only one 
 //c=c+1;  //when this function will run, the value of c will be reteined

 return a*b;
 }
float moneyreceived (int currentMoney, float factor=1.04){
    return currentMoney*factor;
 }

 //int strlen(const char*p)
 //{

 //}
int main ()
{
int a,b;

//cout<<"Enter the value of a and b:";
//cin>>a>>b;
//cout<<"The Product of a and b:"<<product(a,b)<<endl;

int money=10000;
cout<<"if you have"<<money<<"RS in you bank account, you will receive "<<moneyreceived(money)<<"RS after one year"<<endl;
cout<< "for VIP: if you have"<<money<<"RS in you bank account, you will receive "<<moneyreceived(money,1.1)<<"RS after one year";
return 0;
}