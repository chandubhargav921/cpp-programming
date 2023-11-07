#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    string ans;
    cin>>ans;
    int n=ans.size();
    int m=n/2;
    int j=0;
    for(int i=0;i<m;i++){
        if(ans[i]==ans[n-i-1]){
            j++;
        }
        
    }
    if(j==m){
        cout<<"The given string is a palindrome"<<endl;
    }else{
        cout<<"The given string is not a palindrome"<<endl;
    }
    }
}