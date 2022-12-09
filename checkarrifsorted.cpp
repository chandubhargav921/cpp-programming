#include <iostream>
using namespace std;
int main(){
    int arr[100],j=1,n,k;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int k=0;k<n;k++){
        if(arr[k]>arr[j]){
            cout<<"no"<<endl;
            break;
        }else{
           
        }
        j++;
    }
    cout<<"yes";
}