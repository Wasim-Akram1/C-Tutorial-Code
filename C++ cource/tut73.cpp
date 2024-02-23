#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["wasim"]=98;
    marksMap["akram"]=99;
    marksMap["khan"]=100;
    marksMap.insert({{"Ramiz", 96},{"raja", 95}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"the size is "<<marksMap.size()<<endl;
    cout<<"the max is "<<marksMap.max_size()<<endl;
    cout<<"the empty is "<<marksMap.empty()<<endl;
    return 0;
}