#include <iostream>
using namespace std;
int main(){
    int arr[100],n,i,j,sum;
    double avg;
    
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>arr[j];
    }
    sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
        
    }
    cout<<"the sum is ";
    cout<<sum<<endl;
    avg=sum/double(n);
    cout<<"the average of the array is";
    cout<<avg<<endl;
}