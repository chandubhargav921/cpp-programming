#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
list<int> l;
vector<int> v={20,30,40};
void insert(int  x){
    l.push_back(x);
}
void print(){
    for(int x:l){
        cout<<x<<" ";
    }
} 
void replace(int x,vector<int> &v){
    auto itr=find(l.begin(),l.end(),x);
    itr=l.erase(itr);  
    l.insert(itr,v.begin(),v.end());
}
int main()
{// {vector<int> v={20,30,40};
list<int> l;
insert(3);
insert(10);
insert(2);
insert(10);
print();
replace(10, v);
cout<<endl;
print();
 


    return 0;
}
