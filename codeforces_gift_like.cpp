#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> top;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>>v(n,vector<char>(m,'l'));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char temp;
                cin>>temp;
                v[i][j]=temp;
            }
        }
        int k=0;
    //           for(auto x:v){
    //         for(auto y:x){
    //             cout<<y<<" ";
    //         }
    //         cout<<endl;
    // }
    string re="vika";
        vector<vector<char>> ma;
        while(k<m){
             vector<char> te;
        for(auto x:v){
            // for(auto y:x){
            //     cout<<y<<" ";
            // }
           
            te.push_back(x[k]);
            
        }
        ma.push_back(te);
        k++;
        }
        // cout<<endl;
        //  for(auto x:ma){
        //     for(auto y:x){
        //         cout<<y<<" ";
        //     }
    //         cout<<endl;
    // }
    int c=0;
    int si=re.size();
    // for(auto x:ma){
    //     if(find(x.begin(),x.end(),'v')==x.end()&&find(x.begin(),x.end(),'i')==x.end()&&find(x.begin(),x.end(),'k')==x.end()&&find(x.begin(),x.end(),'a')==x.end())
    // }
    int item=0;
    for(int i=0;i<m;i++){
        if(find(ma[i].begin(),ma[i].end(),re[item])==ma[i].end()){
            // cout<<"no"<<endl;
            while(find(ma[i].begin(),ma[i].end(),re[item])!=ma[i].end()){
                i++;
            }
            if(i==m-1){
            // top.push_back("no"); 
            break;
            }
           
        }else{
            c++;
             item++;
        }
       
    }
    if(c==si){
        // cout<<"yes"<<endl;
        top.push_back("yes");
    }else{
        top.push_back("no");
    }
    
    }
    for(auto x:top){
        cout<<x<<endl;
    }
    
    
}
/*
output 
5
1 4
vika
3 3
bad
car
pet
4 4
vvvv
iiii
kkkk
aaaa
4 4
vkak
iiai
avvk
viaa
4 7
vbickda
vbickda
vbickda
vbickda
yes
no
yes
no
yes*/