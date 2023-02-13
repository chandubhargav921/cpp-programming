#include <iostream>

using namespace std;
int check(int n,int arr[],int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
            
        }
    }
    return count;
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
