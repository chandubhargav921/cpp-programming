#include <iostream>

using namespace std;
int fib(int n){
    if(n==0||n==1){
        return n;
    }
return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"fib for n="<< n <<" is "<<fib(n-1)<<endl;
    return 0;
}
