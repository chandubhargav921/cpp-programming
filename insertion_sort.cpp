#include <bits/stdc++.h>
using namespace std;
int main(){
    int *arr,n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    while(l<n*n){
    for(int j=1;j<n;j++){
        while(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            
        }
    }
    l++;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}