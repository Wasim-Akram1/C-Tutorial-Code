#include <iostream>
using namespace std;
int main()
{

    /*Loops in c++:
    1.For Loop 
    2. While loop
    3.do-while loop */

    //For loop in c++
   /* int i=1;
    cout<<i;
    i++;*/
    /*for (int i=1; i<=40; i++)
    {
        cout<<i<<endl;
    }*/
    //Infinite for loop 
    /*for (int i=1; 34<=40; i++)
    {
        cout<<i<<endl;
    }*/

    //While loop in c++
    /*int i=1;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }*/
    // Example of Infinite while loop
    /*int i=1;
    while (true)
    {
        cout<<i<<endl;
        i++;
    }*/

    //Do while loop in c++
    /*int i=1;
    do{
        cout<<i<<endl;
        i++;
    } 
    while(i<=40);*/

    int n, range;
    cout<<"Enter any Integer"<<endl;
    cin>>n;
    cout<<"Enter the range"<<endl;
    cin>>range;
    for (int i=1; i<=range; i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}