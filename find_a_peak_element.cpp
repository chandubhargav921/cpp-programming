#include <bits/stdc++.h>

using namespace std;

int main()
{int *arr,n;
cout<<"enter the n"<<endl;
cin>>n;
arr=new int[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    // for(int x=0;x<n;x++){
    //     cout<<arr[x]<<" ";
    // }
    for(int j=0;j<n;j++){
        if(j==0){
            if(arr[j+1]<arr[j]){
                cout<<"the element is"<<arr[j]<<endl;
            }
        }else if(j==n-1){
            if(arr[n-2]<arr[n-1]){
                cout<<"the element is"<<arr[n-1]<<endl;
            }
        }else{
            if(arr[j-1]<arr[j]&&arr[j+1]<arr[j]){
                cout<<"the element is"<<arr[j]<<endl;
            }
        }
    }
}
