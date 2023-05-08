#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[],int v,int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void dfs(vector<int> adj[],int s,int v,bool visited[]){
    int u=s;
    if(visited[u]==false){
    cout<<u<<" ";
    }
    visited[u]=true;
    for(auto x:adj[u]){
        if(visited[x]==false){
            
            dfs(adj,x,v,visited);
            visited[x]=true;
        }
    }
};

void dfss(vector<int> adj[],int v){
bool visited[v+1];
int s;
for(auto x:visited){
    x=false;
}
for(int i=0;i<v;i++){
s=i;
dfs(adj,s,v,visited);
}
}
int main(){
    vector<int> adj[7];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,4,5);
    addEdge(adj,5,6);
    // addEdge(adj,0,1);
    dfss(adj,7);
    
    return 0;
}