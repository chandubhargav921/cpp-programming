#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l1;
    l1.assign({10,20,30,40});
    l1.reverse();
     forward_list<int> l2; 
     l2.assign({1,2,3,4});
     l1.merge(l2);
     for(int x:l1){
        cout<<x<<" ";
    }
    cout<<endl;
    l1.sort();
     for(int x:l1){
        cout<<x<<" ";
    }
    
}
