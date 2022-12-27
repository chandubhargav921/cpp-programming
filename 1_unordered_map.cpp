#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["chandu"]=143;
    m.insert({"bhargav",14367});
    for(auto x:m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}
