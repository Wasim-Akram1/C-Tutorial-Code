#include <iostream>
using namespace std;
class Point 
{
    int a, b;
    public:
    Point(int x, int y)
    {
        a=x;
        b=y;
    }
    void displayPoint()
    {
        cout<<"The Point is ("<<a<<","<<b<<")"<<endl;
    }
};
friend int Distance(Point); 
