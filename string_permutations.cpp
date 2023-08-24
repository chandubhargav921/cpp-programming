#include <bits/stdc++.h>

using namespace std;
vector<int> ans;
void permute(string s,int l,int r){
    if(l==r){
        ans.push_back(stoi(s));
        return;
    }else{
    for(int i=l;i<r;i++){
        swap(s[l],s[i]);
        permute(s,i+1,r);
        swap(s[l],s[i]);
    }
    }
}

int main()
{string ques="230241";
int r=ques.size();
permute(ques,0,r);
for(auto x:ans){
    cout<<x<<" ";
}

    return 0;
}
