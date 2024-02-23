#include <iostream>
using namespace std;
int sum (int a, int b)
{
    int c=a+b;
    return c;
    }
    //This will not swap a and b 
    void swap (int a, int b)
    {
        int temp =a;
        a=b;
        b=temp;
    }

    //Call by reference using pointer 
      void swappointer (int *a, int *b)
    {
        int temp =*a;
        *a=*b;
        *b=temp; 
    }

    //Call by reference using reference variable 
      int & swapreferencevar (int &a, int &b)
    {
        int temp =a;
        a=b;
        b=temp;
        return a; 
    }
    int main()
    {
        int x= 4, y=5;
        cout<<"The sum of x is "<<x<<"The value of y is "<<y<<endl;
       //swap (x,y);//This will not swap a and b 
        //swappointer(&x, &y);//This will swap the value
        swapreferencevar(x,y)=766;     
        cout<<"The sum of x is "<<x<<"The value of y is "<<y<<endl;
        return 0;
    }
