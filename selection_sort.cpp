#include <bits/stdc++.h>
using namespace std;
int minelement(vector<int> v1){
    int min;
    for(int i=0;i<v1.size();i++){
   if(v1[i]<min){
    min=v1[i];
   }
   }
   return min;
}
int main()
{
//     vector<int> v={1,2,3,4,5};
//     auto itr=find(v.begin(),v.end(),4);
//     v.erase(itr);

// for(auto x:v){
//     cout<<x<<" ";
// }
// int minelement(vector<int> v1){
//     int min;
//     for(int i=0;i<n;i++){
//   if(v1[i]<min){
//     min=v1[i];
//   }
//   }
//   return min;
// }
int *arr,n;
cout<<"enter the size n"<<endl;
cin>>n;
arr = new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> v2;
vector<int> v1(arr,arr+n);
//   while(v1.size()!=0){
//       int min=0;
//   for(int i=0;i<n;i++){
//   if(v1[i]<min){
//     min=v1[i];
//   }
//   }
// //   vector<int> v2;
//   v2.push_back(min);
//   auto itr=find(v1.begin(),v1.end(),min);
//   v1.erase(itr);
//   }
// //  
// cout<<v2.front();
cout<<minelement(v1)<<endl;
while(v1.size()!=0){
    // int min=minelement(v1);
auto itr=find(v1.begin(),v1.end(),minelement(v1));
v2.push_back(*itr);
v1.erase(itr);

}
cout<<"the order is"<<endl;
for(auto x:v2){
    cout<<x<<" ";
}
   
    return 0;
}
