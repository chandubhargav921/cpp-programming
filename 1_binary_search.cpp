#include <iostream>
#include <vector>

using namespace std;
int binarysearch(int x,int arr[],int n){
    int low=0,high=n-1,mid;
   while(low<=high){
    mid=(low+high)/2;
   if(x==arr[mid]){
       return mid;
       
   }else if(x<arr[mid]){
       high=arr[mid];
       
   }else{
       low=arr[mid];
   }
   }
   return mid;
}
int main()
{
   int arr[5]={1,2,3,4,5};
   int n=5;
   cout<<binarysearch(5,arr,5)<<endl;
   ;
   return 0;
}
