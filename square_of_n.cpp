#include <iostream>

using namespace std;
int cube(int n){
    return n*n*n;
}
int main()
{
   int n;
   cout<<"enter the n"<<endl;
   cin>>n;
   cout<<cube(n)/n;
    return 0;
}
