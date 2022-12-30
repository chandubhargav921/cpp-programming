#include <iostream>
#include <list>
using namespace std;

int main()
{
 list<int> l={1000,250,200,0,50,100,60,500};
  for(int x:l){
     cout<<x<<" ";
 }
  cout<<endl;
    l.sort();
   
     for(int x:l){
     cout<<x<<" ";
 }
 l.reverse();
  cout<<endl;
    for(int x:l){ 
     cout<<x<<" ";
 }
 
}
