#include <iostream>
using namespace std;
int sum=0;
int sum_upto_n(int n){
    sum+=n;
    
    if(n==1){
        return sum;
    }
   sum_upto_n(n-1);
   
   return sum;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<sum_upto_n(n);
    return 0;
}