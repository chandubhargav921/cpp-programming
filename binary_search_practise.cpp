#include <bits/stdc++.h>

using namespace std;
int low=0;
    int high=7;
    int mid=(low+high)/2;
int fuck(int arr[],int low,int high,int x){
    mid=(low+high)/2;
    while(low<=high){
        // mid=(low+high)/2;
        if(x<arr[mid]){
            high=mid;
              fuck(arr,low,high,x);
        }else if(x>arr[mid]){
            low=mid+1;
            fuck(arr,low,high,x);
        }else{
            return mid;
        }
    }
    return -1;
}
// int bs(int arr[],int n,int x){
//     // sort(arr,arr+n);
//     // int low=0;
//     // int high=n-1;
//     // int mid=(low+high)/2;
//     while(low<=high){
//         if(x<mid){
//             high=mid;
//             bs(arr,n,x);
//         }else if(x>mid){
//             low=mid+1;
//             bs(arr,n,x);
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }
int main()
{
int arr[7]={8,10,11,15,20,40,55};
 cout<<fuck(arr,0,7,8)<<endl;
    return 0;
}
