#include<iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream wout("sample60.txt");
    cout<<"enter your name";
    string name;
    cin>>name;
    wout<<"My name is" + name;
    wout.close();
    ifstream win("sample60.txt");
    string content;
    win>>content;
    cout<<"The content of the file is: "<<content;
    win.close();
    return 0;
}