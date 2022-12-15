#include <iostream>
#include <deque>

using namespace std;

int main()
{deque<int> dq={10,20,30};
auto itr=dq.begin();
itr++;
dq.insert(itr,{1,2,3,4,5});
for(int x:dq){
    cout<<x<<" ";
}
}
