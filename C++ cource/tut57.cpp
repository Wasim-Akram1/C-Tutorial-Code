#include <iostream>
using namespace std;
class CWH 
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r)
    {
        title=s;
        rating =r;
    }
    virtual void display()
    {

    }
};
class CWHvideo: public CWH
{
    float videoLength;
    public:
    CWHvideo(string s, float r, float vl):CWH(s,r)
    {
        videoLength=vl;
    }
    void display()
    {
        cout<<"This is amazing video with title "<<title<<endl;
        cout<<"Rating of the video is "<<rating<<"out of 5 star"<<endl;
        cout<<"Length of the video is "<<videoLength<<"minutes"<<endl;
    }
};
class CWHText:public CWH
{
    int words;
    public:
    CWHText(string s, float r, int wc):CWH(s,r)
    {
        words=wc;
    }
    void display()
    {
        cout<<"This is amazing text tutorial with title"<<title<<endl;
        cout<<"Rating of this text tutorial"<<rating<<"out of 5 stars"<<endl;
        cout<<"Number of words in this tutorial is "<<words<<"words"<<endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title ='Django tutorials';
    vlen=4.56;
    rating=4.5;
    CWHvideo djvideo(title, rating, vlen);
    title ='Django tutorials';
    words=500;
    rating=3.45;
    CWHText djtext(title, rating, words);
    CWH* tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}