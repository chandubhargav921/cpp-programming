#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int k;
    cout<<"enter the value of k"<<endl;
    cin>>k;
    int y=(x<<(k-1));
    if(y-1%2==0){
        cout<<"the kth digit is set"<<end;  
    }else{
        cout<<"the kth digit is not set"<<endl;
    }

    return 0;
}
