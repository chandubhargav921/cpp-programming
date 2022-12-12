#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({10,20,30,40});
    l.clear();
    for(int x:l){
        cout<<x<<" ";
    }
}
