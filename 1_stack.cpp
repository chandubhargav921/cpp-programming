#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(s.empty() ==false){
        
        cout<<s.top()<<" ";
    
        s.pop();
    }
  cout<<endl;
    // s.pop();
    // cout<<s.top();
    // cout<<endl;
    // for(int x:s){
    //     cout<<x<<" ";
    // }
    cout<<s.top();
}
