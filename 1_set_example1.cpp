#include <iostream>
#include <set>
using namespace std;
set<int> s;
bool search(int x){
    if(s.count(x)){
        return true;
    }else{ 
        return false;
    }
}

void insert(int x){
    s.insert(x);
}

void delete(*x){
    auto itr=x;
    s.erase(itr);
}

int getFloor(int x){
    if(s.count(x)){
  return   x;
    }else{
        return   (*(&s.lower_bound(x)-1));
    }
}

int getCeiling(int x){
    if(s.count(x)){
  return   x;
    }else{
        return   (*(&s.lower_bound(x)+1));
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(15);
    insert(5);
    insert(25);
   cout<<search(15)<<endl;
    delete(15);
    search(15); 
    getFloor(6);
    getFloor(5);
    getCeiling(6);
    getCeiling(100);
    getFloor(1);
//     insert(10);
//     insert(20);
//     insert(15);
//     insert(5);
//     insert(25);
//   cout<<search(15)<<endl;
//     delete(15);
//     cout<<search(15)<<endl;
//     cout<<getFloor(6)<<endl;
//     cout<<getFloor(5)<<end;
//     cout<<getCeiling(6)<<endl;
//     cout<<getCeiling(100)<<endl;
//     cout<<getFloor(1)<<endl;
}
