#include <iostream>
#include <list>
using namespace std;

int main()
{list<int> l={10,20,30,40,50};
 l.push_front(1);
 cout<<*(l.begin())<<endl;
 l.push_back(2);
 cout<<*(--l.end())<<endl; 
 l.pop_front();
 l.pop_front();
 cout<<*(l.begin())<<endl;
 l.pop_back();
 l.pop_back();
 cout<<*(--l.end())<<endl;
 
    
}
