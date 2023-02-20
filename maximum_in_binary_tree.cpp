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
int maximum_in_bt=0;
// int getsize(struct node *root){
//     if(root==NULL){
//         return 0;
//     }else{
//         return 1+getsize(root->left)+getsize(root->right);
//     }
// }
// int height(struct node *root){
//     if(root==NULL){
//         return 0;
//     }else{
//         return max(height(root->left),height(root->right))+1;
//     }
// }
//   vector<int> mainn;
void inorder(struct node *root){
  
    // int ans=0;
    if(root!=NULL){
        if(root->key>maximum_in_bt){
            maximum_in_bt=root->key;
        }
        inorder(root->left);
        root->key;
        inorder(root->right);
    
    }
    // main.push_back();
    // ans.clear();

}
// void kdistance(struct node *root,int k){
//     if(root!=NULL){
//         if(k==0){
//             cout<<root->key<<" ";
//         }else{
//             kdistance(root->left,k-1);
//             kdistance(root->right,k-1);
//         }
//     }
// }
// void levelordertraversal(struct node *root,int k){
//     int i=0;
//     while(i<k){
//         kdistance(root,i);
//         i++;
//     }
// }
int main(){
    node *root=new node(10);
    // node *root =new node(20);
root->right= new node(20);
root->left =new node(15);
root->left->left=new node(10030);
root->right->right=new node(50);
root->right->left=new node(40);
root->right->left->left=new node(60);
root->right->left->right=new node(70);
    // cout<<root->key<<endl;
    // int heightt=height(root);
    // kdistance(root,0);
    // levelordertraversal(root,heightt);
    // cout<<endl;
    inorder(root);
    // int size_bt=mainn.size();
    // int newsize= getsize(root);
    // cout<<size_bt<<endl;
    // cout<<newsize<<endl;
    cout<<maximum_in_bt<<endl;
}
