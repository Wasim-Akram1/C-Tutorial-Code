#include <iostream>
using namespace std;
int main () 
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    //Selection control structure: If else-if else ladder 
   /* if((age<18)&&(age>0))
    {
        cout<<"You cannot come to the party"<<endl;
    }
    else if (age==18)
    {
        cout<<"You are kid and you will gate a kid pass to the party"<<endl;
    }
    else if(age<1) 
    {
        cout<<"You are not yet born"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }*/

     //Selection control structure: Switch Case Statement 
     switch (age)
     {
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 22:
        cout<<"You are 22"<<endl;
        break;
        case 2:
        cout<<"You are 2"<<endl;
        break;
        default:
        cout<<"No special case"<<endl;
        break;
     }
     cout<<"Done with switch";
    return 0;
}