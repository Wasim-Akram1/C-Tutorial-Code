#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    public: 
    void read (void);
    void chk_bin (void);
    void ones_compliment (void);
    void display (void);
};
void binary:: read (void)
{
cout<<"Enter a Binary Number ";
cin>>s;
    }
 void binary::chk_bin(void)
    {
        for (int i=0; i < s.length(); i++)
        {
            if (s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"Incorrect Binary Format"<<endl;
                exit(0);            
            }
        }
    }
    void binary:: ones_compliment (void)
    {
        chk_bin();
        for (int i=0; i<s.length();i++)
        {
            if(s.at(i)=='0')
            {
                s.at(i)='1';            
            }
            else 
            {
                s.at(i)='0';
            }
        }
    }
    void binary:: display (void)
    {
        cout<<"Displaying your Binary Number"<<endl;
        for (int i=0; i<s.length(); i++)
        {
            cout<<s.at(i);
        }
        cout<<endl; 
    }
    int main()
    {
        //OOPS Classes and Objects 
        //C++ ---> Initially called ---> c with classes by streousstroup
        //Class ---> Extension of structure (in c)
        //Structures And Limitations 
        // --Members are public 
        // --No Methods 
        //Classes ---> structures +more 
        //Classes ---> can have methods and properties 
        // Classes ---> Can make few members as private 
        //structures in c++ are typedefed
        //you can declare object along with the class declaration like thiss:
        /*class Employee 
        {
            class defination 
        }
        Wasim Mahfuz Aabid Jihan;
        wasim.salary= 8 makes no scence if salary is private */

        //Nesting of Member Function 
        binary b;
        b.read();
        b.chk_bin();
        b.display();
        b.ones_compliment();
        b.display();
        return 0;
    }