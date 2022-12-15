#include <iostream>
#include <deque>

using namespace std;

int main()
{deque<int> dq={10,20,30};
dq.push_front(5);
for(int x:dq){
    cout<<x<<" ";
}
cout<<endl;
dq.push_back(6);
for(int x:dq){
    cout<<x<<" ";
}

cout<<endl;
dq.pop_front();
dq.pop_front();
for(int x:dq){
    cout<<x<<" ";
}
cout<<endl;
dq.pop_back();
dq.pop_back();
for(int x:dq){
    cout<<x<<" ";
}
cout<<endl;
cout<<dq.front()<<" -- "<<*(--dq.end());
}