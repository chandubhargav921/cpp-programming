#include <iostream>

using namespace std;
int binarysearch(int low,int high,int arr[],int x){
   int mid=(low+high)/2;
    if(mid==x){
        return mid;
    }else if(arr[mid]>x){
       return  binarysearch(low,mid-1,arr,x);
    }else{
        return binarysearch(mid+1,high,arr,x);
    }
 return -1;
}
int main(){
    int arr[7]={46,23,78,12,20,16,89};
    cout<<binarysearch(0,7,arr,20)<<endl;
    
}
