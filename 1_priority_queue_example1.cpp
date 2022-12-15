#include <iostream>
#include <queue> 

using namespace std;

int main()
{  int n,*arr,*ar;
int i=0;
 arr=new int(n);
 ar=new int(n);
 cout<<"enter the number of items"<<endl;
 cin>>n;
 for(i=0;i<n;i++){
     cin>>arr[i];
     
 }
 cout<<arr[0]<< " ";
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    // pq.push(10);
    // pq.push(15);
    // pq.push(5);
    // cout<<pq.top()<<" ";
    // pq.pop();
    // cout<<pq.top()<<" ";
    // pq.pop();
    // cout<<pq.top()<<" ";
//     while(i<n){
//      cout<<arr[i];
//      i++;
//  }
i=0;
cout<<pq.top()<< " ";
auto itrr=&pq.top();
for(auto itr=&(pq.top());itr<(itrr+n);itr++){
    cout<<pq.top()<<" ";
     ar[i]=pq.top();
     pq.pop();
     i++;
     
 }
  for(int j=0;j<n;j++){
      cout<<ar[j]<<" ";
  }
    
}
