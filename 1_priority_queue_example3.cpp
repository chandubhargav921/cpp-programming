#include <iostream>
#include <queue>

using namespace std;

int main()
{int i=0,j=0;
int sum,rsum=0;
cout<<"enter sum"<<endl;
cin>>sum;
    priority_queue<int,vector<int>,greater<int>> pq;
    int cost[]={1,12,5,111,200};//20,10,5,30,100  1,12,5,111,200
    int n=sizeof(cost)/sizeof(1);
    int ncost[n];
    while(i<n){
        pq.push(cost[i]);
        i++;
    }
    
    while(j<n){
        ncost[j]=pq.top();
        pq.pop();
        j++;
    }
    j=0;
    cout<<ncost[0]<<" ";
    while(rsum<=sum){
        rsum+=ncost[j];
        j++;
    
    }
    // for(int j=0;j<n;j++){
    //     rsum+=ncost[j];
    //     if(rsum>sum){
    //         j=j-1;
    //         return j;
    //         break;
    //     }else{
            
    //     }
    // }
    cout<<rsum<<" ";
    cout<<j-1;
}
