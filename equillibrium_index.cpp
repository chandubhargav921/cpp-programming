#include <bits/stdc++.h>

using namespace std;

int main()
{
//  int arr[7]={1,3,5,2,2,5,2};
int *arr;
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 
 int k=0,l=0;
//  int n=sizeof(arr)/sizeof(1);
 vector<int> v1;
 int answer=0;
 for(int i=0;i<n;i++){
     answer=0;
  for(int j=i;j<=n-1;j++){
      answer+=arr[j];
      
  }
//   arr1[i]=answer;
v1.push_back(answer);
 }
 vector<int> v2;
 reverse(&arr[0],&arr[n]);
 for(int i=0;i<n;i++){
     answer=0;
  for(int j=i;j<=n-1;j++){
      answer+=arr[j];
      
  }
//   arr1[i]=answer;
v2.push_back(answer);
 }
 
  for(auto x:v1){
      cout<<x<<" ";
  }
  cout<<endl;
  cout<<"............"<<endl;
  for(auto x:v2){
      cout<<x<<" ";
  }
  int req=0;
  for(int i=0;i<n;i++){
      if(v1[i]==v2[i]){
          req=i;
      }
  }
  cout<<endl;
  cout<<"the equllibrium  index is "<<req<<endl;
  return 0;
}
