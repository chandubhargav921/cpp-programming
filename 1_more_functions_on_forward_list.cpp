#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.assign({10,20,30,40});
    for(int x:l){
        cout<<x<<" ";
    }
    l.remove(40);
    cout<<endl;
    for(int x:l){
        cout<<x<<" ";
    }
    
}
