#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string numm=to_string(num);
    int n=numm.size();
    int ans=0;
    for(int i=0;i<n;i++){
        string temp="";
        temp+=numm[i];
        ans+=pow(stoi(temp),n);
        cout<<ans<<" ";
    }
    cout<<endl;
    cout<<ans<<endl;
    if(ans==num){
        cout<<"yes";
    }else{
        cout<<"false";
    }
}