#include <iostream>
#include <deque>

using namespace std;
deque<int> dq;
void insertMin(int x){
    dq.push_front(x);
}
void insertMax(int x){
    dq.push_back(x);
}
void getMin(){
    cout<<dq.front();
    cout<<endl;
}
void getMax(){
    cout<<dq.back();
    cout<<endl;
}
void extractMin(){
    dq.erase(dq.begin());
}
void extractMax(){
    dq.erase(--dq.end());
}
int main()
{insertMin(5);
insertMax(10);
insertMin(3);
insertMax(15);
insertMin(2);
getMin();
getMax();
insertMin(1);
getMin();
insertMax(20);
getMax();

}
