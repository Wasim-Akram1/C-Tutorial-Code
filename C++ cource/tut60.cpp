#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st="wasim akram"; 
    string st2;
    ofstream out("sample60.txt");
    out<<st;
    ifstream in("sample60b.txt");
    getline(in, st2);
    cout<<st2;
    return 0;
}
//file read write or taking input or output to the file 