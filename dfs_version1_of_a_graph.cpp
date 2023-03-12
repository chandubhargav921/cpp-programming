#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// void bfs(vector<int> adj[],int v,int s,bool visited[]){
//     // bool visited[v+1];
//     // for(int i=0;i<v;i++){
//     //     visited[i]=false;
//     // }
//     visited[s]=true;
//     queue<int> q;
//     q.push(s);
//     while(q.empty()==false){
//         int u= q.front();
//         q.pop();
//         cout<<u<<" ";
//         for(int ve:adj[u]){
//             if(visited[ve]==false){
//                 visited[ve]=true;
//                 q.push(ve);
//             }
//         }
//     }
// }
// int bfsdisc(vector<int> adj[],int v){
//     int s;
//     int count=0;
//     bool visited[v+1];
//     for(int i=0;i<v;i++){
//         visited[i]=false;
//     }
//     for(int i=0;i<v;i++){
//          s=i;
//         if(visited[i]==false){
//             count++;
//             visited[i]=true;
//             bfs(adj,v,s,visited);
//             cout<<endl;
//         }
//     }
//     return count;
// }
void dfsRec(vector<int>adj[],int v,int s,bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(int x:adj[s]){
        if(visited[x]==false){
            visited[x]=true;
            dfsRec(adj,v,x,visited);
        }
    }
}
void dfs(vector<int> adj[],int v,int s){
    bool visited[v+1];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    dfsRec(adj,v,s,visited);
}

int main(){
    vector<int> adj[12];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,0,3);
    addEdge(adj,1,2);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    // addEdge(adj,5,6);
    addEdge(adj,7,8);
    addEdge(adj,8,9);
    addEdge(adj,9,10);
    addEdge(adj,10,11);
//     cout<<endl;
//   cout<<bfsdisc(adj,12)<<endl;
   dfs(adj,12,7);
    return 0;
}