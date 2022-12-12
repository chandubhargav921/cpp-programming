#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l={10,20,30};
    l.push_front(5);
    // cout<<l[0]<<endl;
    l.push_front(3);
    // cout<<l[0]<endl;
    l.pop_front();
     cout<<*(l.begin())<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    
}
