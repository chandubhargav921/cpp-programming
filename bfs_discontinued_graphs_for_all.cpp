#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void bfs(vector<int> adj[],int v,int s,bool visited[]){
    // bool visited[v+1];
    // for(int i=0;i<v;i++){
    //     visited[i]=false;
    // }
     queue<int> q;
     q.push(s);
     visited[s]=true;
     while(q.empty()==false){
         int u=q.front();
         q.pop();
         cout<<u<<" ";
        //  if(visited[u]==false){
             for(int ve:adj[u]){
                 if(visited[ve]==false){
                     visited[ve]=true;
                 q.push(ve);
                 }
             }
             
        //  }
     }
}
void bfsdis(vector<int> adj[],int v){
    bool visited[v+1];
    int s;
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
    if(visited[i]==false){
        s=i;
        bfs(adj,v,s,visited);
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
    addEdge(adj,4,5);
    cout<<"hello "<<endl;
    addEdge(adj,6,7);
    addEdge(adj,7,8);
    addEdge(adj,10,11);
    cout<<"what"<<endl;
    cout<<"hii"<<endl;
    bfsdis(adj,12);
    return 0;
}