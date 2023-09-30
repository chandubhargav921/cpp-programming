/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()

{
    // int n=20;
    vector<int>v{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    reverse(v.begin(),v.begin()+5);
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(v.begin()+6,v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         sum+=i-j;
    //     }
    // }
    // cout<<sum<<endl;
    // cout<<"Hello World";

    return 0;
}
