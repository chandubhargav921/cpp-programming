#include <bits/stdc++.h>
using namespace std;
int answer(int *arr,int n){
    int mid;
    int low=0;
    int high=n-1;
    mid=(low+high)/2;
    while(low<=high){
        mid=(low+high)/2;
        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid])){
            return mid;
        }
        if((mid>0)&&(arr[mid-1]>=arr[mid])){
             high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int *arr,n;
    cout<<"enter the size of array n"<<endl;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"....."<<arr[answer(arr,n)];
}