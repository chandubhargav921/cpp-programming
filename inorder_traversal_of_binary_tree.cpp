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
int height(struct node *root){
    if(root==NULL){
        return 0;
    }else{
        return max(height(root->left),height(root->right))+1;
    }
}
void kdistance(struct node *root,int k){
    if(root!=NULL){
        if(k==0){
            cout<<root->key<<" ";
        }else{
            kdistance(root->left,k-1);
            kdistance(root->right,k-1);
        }
    }
}
void levelordertraversal(struct node *root,int k){
    int i=0;
    while(i<k){
        kdistance(root,i);
        i++;
    }
}
int main(){
    node *root=new node(20);
    // node *root =new node(20);
root->right= new node(30);
root->left =new node(10);
root->left->left=new node(50);
root->right->right=new node(60);
    // cout<<root->key<<endl;
    int heightt=height(root);
    // kdistance(root,0);
    levelordertraversal(root,heightt);
}
