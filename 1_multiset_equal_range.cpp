#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(40);
    ms.insert(10);
    for(auto x:ms){
        cout<<x<<" ";
    }
    ms.erase(ms.find(10));
    cout<<endl;
     for(auto x:ms){
        cout<<x<<" ";
    }
    cout<<endl;
    ms.insert(10);
     for(auto x:ms){
        cout<<x<<" ";
    }
    cout<<endl;
    // ms.erase(10);  
     for(auto x:ms){
        cout<<x<<" ";
    }
    cout<<ms.count(10)<<endl;
    auto itr=ms.equal_range(10);
    cout<<*itr.first<<" "<<*itr.second;
}
