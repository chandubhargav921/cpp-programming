#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["chandu"]=143;
    m.insert({"bhargav",14367});
    m.insert({"hello",100});
    auto it=m.find("hello");
    if(it!=m.end()){
        cout<<it->second<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    if(m.count("hello")){
        cout<<"element found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("hello");
    for(auto x:m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
    cout<<m.size()<<endl;
    m.erase(m.begin());
    cout<<m.size()<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
    
}
