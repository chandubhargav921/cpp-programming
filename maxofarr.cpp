#include <iostream>
using namespace std;
int main(){
    int arr[100],n,i,j,sum,max=0;
    double avg;
    
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>arr[j];
    }
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"max element is "<<endl;
    cout<<max;
}