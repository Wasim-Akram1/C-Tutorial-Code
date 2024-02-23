#include <iostream>
using namespace std;
template <class T>
class Wasim{
    public:
    T data;
    Wasim(T a){
        data=a;
    }
    void display();
};
template <class T>
void Wasim <T>:: display(){
    cout<<data;
}
void func(int a)
{
    cout<<"I am first func() "<<a<<endl;
}
template <class T>
void func (T a)
{
    cout<<"I am templatised func()"<<a<<endl;
}
template <class T>
void func1 (T a)
{
    cout<<"I am templatised func()"<<a<<endl;
}
int main()
{
   func1(4);
   func(4);
    return 0;
}