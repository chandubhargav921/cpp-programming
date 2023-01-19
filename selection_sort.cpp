#include <bits/stdc++.h>
using namespace std;
vector<int> v3;
int formin(vector<int> v,int n){
    int min=0;
   for(int i=0;i<n;i++){
   if(v[i]<min){
    min=v[i];
   }
   }
   return min;
}
void answer(vector<int>v,int n){
    vector<int>::iterator itr = find(v.begin(),v.end(),formin(v,n));
   v3.push_back(formin(v,n));
    v.erase(itr);    
}
int main(){
    int *arr,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   vector<int> v(arr,arr+n);
//    int min=0;
//    for(int i=0;i<n;i++){
//    if(v[i]<min){
//     min=v[i];
//    }
   
//    auto itr = find(v.begin(),v.end(),formin(v,n));
//     v.erase(itr);
//     n=v.size();
while(v.size()!=0){
    answer(v,n);
    n=v.size();
}
for(int i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}

    return 0;
}