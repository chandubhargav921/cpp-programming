#include <iostream>
#include <list>
using namespace std;

int main()
{int k=3,n=7;
 list<int> l={0,1,2,3,4,5,6};
 auto itr=l.begin();
 while(l.size()>1){
 for(int count=1;count<k;count++){
     itr++;
     if(itr==l.end()){
         itr=l.begin();
     }
     itr=l.erase(itr);
     if(itr==l.end()){
         itr=l.begin();
     }
 }}
 return *l.begin();
 }

