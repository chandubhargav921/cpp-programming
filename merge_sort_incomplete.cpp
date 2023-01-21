#include <bits/stdc++.h>

using namespace std;
void mergesort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main()
{  int arr[7]={38, 27, 43, 3, 9, 82, 10};
 mergesort(arr,0,7);
 for(int x:arr){
     cout<<x<<" ";
 }
    return 0;
}
