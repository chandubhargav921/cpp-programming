#include <iostream>
#include <queue> 

using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    

    
}
