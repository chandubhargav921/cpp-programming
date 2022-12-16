#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto itr=s.find(10);
    while(itr!=s.end()){
        cout<<*itr<<" ";
        itr++;
    }
    
}
