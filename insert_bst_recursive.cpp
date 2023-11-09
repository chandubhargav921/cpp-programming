#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *right;
    node *left;
    node(int x){
        data=x;
    left=NULL;
        right=NULL;
    }
};
node* insert(node *root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(root->data>val){
        root->left=insert(root->left,val);
    }
    if(root->data<val){
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(node *root){
    if(root==NULL){
        return ;
    }else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main(){
    node *root=new node(6);
    root->left=new node(4);
    root->right=new node(7);
    node *temp=root;
    insert(root,8);
    inorder(temp);
    cout<<endl;
      insert(root,1);
    inorder(temp);
      cout<<endl;
      insert(root,9);
    inorder(temp);
      cout<<endl;
      insert(root,3);
    inorder(temp);
      cout<<endl;
        insert(root,1);
    inorder(temp);
      cout<<endl;
        insert(root,3);
    inorder(temp);
      cout<<endl;
    
    
    
}