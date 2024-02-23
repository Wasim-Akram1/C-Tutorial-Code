#include <iostream>
#include <vector>
using namespace std;
template<class T>
void display (vector<int>&vec)
{
    cout<<"DISPLAYING THIS VECTOR ";
    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    
} 
int main()
{
    vector<int>vec1;
    vector <char>vec2(4);
    vector<char>vec3(vec2);
    vector<int>vec4(6, 3);
    /*cout<<"Enter the size of the vector "<<endl;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    //vec1.pop_back();
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1, 566);*/
    int element, size=5;
    return 0;
}