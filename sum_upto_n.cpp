#include <iostream>
using namespace std;
 int summ=0;
int sum(int n){
    summ+=n;
     if(n==1){
        return summ;
    }
    sum(n-1);
    
    
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
cout<<sum(n);
return 0;
}