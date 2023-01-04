#include <iostream>
using namespace std;
void print_upto_n(int n){
    cout<<n<<endl;
    if(n==1){
        return ;
    }
   print_upto_n(n-1);
   
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print_upto_n(n);
    return 0;
}
