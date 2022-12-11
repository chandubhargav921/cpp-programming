#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
   // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(20);
    cout<<v.capacity()<<endl;
    v.push_back(30);
    cout<<v.capacity()<<endl;
    v.push_back(40);
    cout<<v.capacity()<<endl;
    v.push_back(50);
    cout<<v.capacity()<<endl;
    
}
