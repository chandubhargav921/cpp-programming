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
 auto itr=l.begin();
 itr=l.insert(itr,{5,6,7,8});
 
 
 for(int x:l){
     cout<<x<<" ";
 }
 l.insert(itr,9);
 itr++;
  cout<<endl;
 for(int x:l){
     cout<<x<<" ";
 }
 cout<<endl;
 l.insert(itr,3,22);
  for(int x:l){
     cout<<x<<" ";
 }
 cout<<endl;
 auto itrr=l.begin();
 l.erase(++itrr);
  for(int x:l){
     cout<<x<<" ";
 }
 cout<<endl;
 l.remove(6);
  for(int x:l){
     cout<<x<<" ";
 }
 list<int> l1={100,200,300,400,500};
    l.merge(l1);
    cout<<endl;
     for(int x:l){
     cout<<x<<" ";
 }
}
