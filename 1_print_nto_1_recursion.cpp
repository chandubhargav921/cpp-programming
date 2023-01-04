#include <iostream>
using namespace std;
void print_upto_n(int n){
    for(int i=n;i>0;i--){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print_upto_n(n);
    return 0;
}