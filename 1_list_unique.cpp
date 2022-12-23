#include <iostream>
#include <list>
using namespace std;

int main()
{
 list<int> l={100,200,200,300,400,400,400,500};
  for(int x:l){
     cout<<x<<" "; 
 }
  cout<<endl;
    l.unique();
   
     for(int x:l){
     cout<<x<<" ";
 }
}
