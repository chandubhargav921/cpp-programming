#include <iostream>

using namespace std;
struct node{
    int key;
    node *left,*right;
    node(int x){
        key=x;
        left=NULL;
        right=NULL;
    }
};
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}
void postorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
// {node *root =new node(10);
// root->right= new node(30);
// root->left =new node(20);
// root->right->right=new node(40);
  node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
// cout<<root->left->key<<" "<<root->key<<" "<<root->right->key<<endl;
cout<<"inorder traversal is:  ";
 inorder(root);
 cout<<endl;
 cout<<"preorder traversal is:  ";
 preorder(root);
 cout<<endl;
 cout<<"postorder traversal is:  ";
 postorder(root);
    return 0;
}
