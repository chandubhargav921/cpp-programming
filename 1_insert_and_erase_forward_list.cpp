#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({10,20,30,40});
    auto itr=l.insert_after(l.begin(),{1,2,3});
    itr=l.insert_after(itr,5);
    l.erase_after(itr,l.end());
    for(int x:l){
        cout<<x<<" ";
    }
}
