#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vect={1,2,3,4,5,6,};
    
    for(auto &x:vect)
    x=x+10;
    for(auto &x:vect)
    cout<<x<<endl;
    
}