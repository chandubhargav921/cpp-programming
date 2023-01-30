#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout<<"Hello World";
    vector<int> v(38);
     v[0]=0,v[1]=1,v[2]=1;
    // vector<int> v(37);
    for(int i=3;i<=37;i++){
        v[i]=v[i-1]+v[i-2]+v[i-3];
        
    }
  for(auto x:v){
      cout<<x<<" ";
  }
    return 0;
}
