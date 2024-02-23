#include <iostream>
using namespace std;
int main()
{

    //Array Example 
    int marks[]= {99,89,79,69};
    int mathmarks[]= {2278,73,378,578};
   /*cout<<"these are marks"<<endl;
    cout<<marks [0]<<endl;
    cout<<marks[1]<<endl;

    //You can chnage the value of an array */
   /*marks [2]= 455;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;*/
    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    for (int i=0; i<4;i++)
    cout<<"The value of marks "<<i<<"is "<<marks[i]<<endl;

    //Pointers and array 
    int* p= marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

    /*cout<<"The value of * p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;*/
return 0;
}
