#include<bits/stdc++.h>
using namespace std;
struct node{
    int key;
    node *left;
    node *right;
    node(int x){
        key=x;
        left==NULL;
        right==NULL;
    }
};
void sol(struct node *root,int k){
    if(root!=NULL){
        if(k==0){
            cout<<root->key<<" ";
        }else{
            sol(root->left,k-1);
            sol(root->right,k-1);
        }
    }
}
int main(){
    node *root=new node(20);
    // node *root =new node(20);
root->right= new node(30);
root->left =new node(10);
    // cout<<root->key<<endl;
    sol(root,0);
}
