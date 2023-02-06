#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
     int j=n-1;
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        // j=n-2;
       if(i<j){
           cout<<" ";
       }
       if(i>=j){
           cout<<"*";
       }
       
    }
    cout<<endl;
    j--;
    }
}
