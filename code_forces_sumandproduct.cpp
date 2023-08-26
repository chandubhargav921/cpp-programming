#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>> ans;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
         vector<int> temp;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        int q;
        cin>>q;
        vector<pair<int,int>> pp;
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            pair<int,int> p;
            p.first=x;
            p.second=y;
            pp.push_back(p);
        }
        for(auto x:pp){
           
            // bool iss=0;
              int count=0;
            for(int i=0;i<n-1;i++){
                // bool isss=0;
              
                for(int j=i+1;j<n;j++){
                    if(v[i]+v[j]==x.first&&v[i]*v[j]==x.second){
                        // ans.push_back(1);
                        count++;
                        // isss=1;
                        // continue;
                        // break;
                    
                }
               
            }
            //  if(isss==1){
            //         iss=1;
            //         break;
                    
            //     }
            // if(iss==1){
            //     continue;
            // }
        }
        temp.push_back(count);
        // if(iss==0){
        //     ans.push_back(0);
        // }
    }
   ans.push_back(temp);
}
 for(auto x:ans){
     for(auto y:x){
        cout<<y<<" ";
     }
     cout<<endl;
    }
}