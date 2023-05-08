#include <bits/stdc++.h>

using namespace std;
int  binarysearch(vector<int> arr,int x){
    int low=0,high=arr.size()-1;
    int median=(low+high)/2;
    while(low<=high){
        median=(low+high)/2;
        if(x==arr[median]){
             
              return median;
        }else if(x<arr[median]){
            high=median+1;
        }else{
            low=median+1;
        }
    }
    return -1;
}

int main()
{vector<int> arr{1,2,3,4,5,6,7,8,9};
    // cout<<"Hello World";
    cout<<binarysearch(arr,90);

    return 0;
}
