#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int> bfs(int v,vector<int> adj[]){
 bool visited[v+1];
 vector<int> dist;
for(int i=0;i<v+1;i++){
    visited[i]=false;
}
 for(int i=0;i<v;i++){
     dist.push_back(100);
 }
 queue<int> q;
 q.push(0);
 visited[0]=true;
 dist[0]=0;
 while(q.empty()==false){
     int u=q.front();
     q.pop();
     for(auto a:adj[u]){
         if(visited[a]==false){
             dist[a]=dist[u]+1;
             visited[a]=true;
             q.push(a);
         }
     }
 }
 return dist;
}
int main(){
    int v=6;
    vector<int> adj[v+1];
    addEdge(adj,0,1);
     addEdge(adj,0,2);
     addEdge(adj,0,4);
      addEdge(adj,1,3);
       addEdge(adj,2,3);
       addEdge(adj,2,4);
       addEdge(adj,3,5);
        // addEdge(adj,1,2);
        addEdge(adj,4,5);
        vector<int> ans;
      ans= bfs(v,adj);
        for(auto x:ans){
            cout<<x<<" ";
        }
    return 0;
}