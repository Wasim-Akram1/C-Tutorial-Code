#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    int arr[]={1,73,3,4,12,54,7};
    sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());
    for (int i=0; i<7; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}