#include <iostream>
using namespace std;
class Student 
{
    protected:
    int roll_no;
    public:
    void set_no(int a)
    {
        roll_no=a;
    }
    void print_no(void)
    {
        cout<<"your roll no is: "<<roll_no<<endl;
    }
};
class Test : virtual public Student 
{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2)
    {
        maths=m1;
        physics=m2;
    }
    void print_marks(void)
    {
        cout<<"Your result is here: "<<endl
            <<"maths: "<<maths<<endl 
            <<"physics: "<<physics<<endl;
    }
};
class Sports :virtual public Student 
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score=sc;
    }
    void print_score(void)
    {
        cout<<"your pt score is: "<<score<<endl;
    }
};
class Result :public Test, public Sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total=maths+physics+score;
        print_no();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;
    }
};
int main()
{
    Result wasim;
    wasim.set_no(133);
    wasim.set_marks(85.0, 90.0);
    wasim.set_score(10);
    wasim.display();
    return 0;
}