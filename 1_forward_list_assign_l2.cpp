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
    cout<<endl;
    forward_list<int> l2;
    l2.assign(l.begin(),l.end());
    for(int x:l2){
        cout<<x<<" ";
    }
    cout<<endl;
    forward_list<int> l3;
    l3.assign(5,10);
    for(int x:l3){
        cout<<x<<" ";
    }
}
