#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int v,int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}
void bfs(vector<int> adj[],int s,int v,bool visited[]){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();
        for(auto x:adj[u]){
            if(visited[x]==false){
                q.push(x);
                visited[x]=true;
            }
        }
    }
};
void bfsdis(vector<int>adj[],int v){
    bool visited[v+1];
    for(auto x:visited){
        x=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            int s=i;
            bfs(adj,s,v,visited);
            }
    }
}
int main(){
      vector<int> adj[12];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,2,4);
    // addEdge(adj,4,5);
    // cout<<"hello "<<endl;
    addEdge(adj,6,7);
    addEdge(adj,7,8);
    addEdge(adj,10,11);
    bfsdis(adj,12);
    return 0;
}