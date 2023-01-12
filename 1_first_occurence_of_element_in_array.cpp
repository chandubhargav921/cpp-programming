#include <iostream>

using namespace std;
int check(int n,int arr[],int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    int arr[10]={1,10,10,10,20,20,40};
    cout<<"enter the element to check"<<endl;
    cin>>x;
    n=sizeof(arr)/sizeof(1);
    cout<<check(n,arr,x)<<endl;
  
    
}
