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
int height(struct node *root){
    if(root==NULL){
        return 0;
    }else{
        return max(height(root->left),height(root->right))+1;
    }
}
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
vector<int> anss;
void kdistance(struct node *root,int k){
    // vector<int> result;
    
    if(root!=NULL){
        if(k==0){
            // cout<<root->key<<" ";
            anss.push_back(root->key);
        }else{
            kdistance(root->left,k-1);
            kdistance(root->right,k-1);
            // kdistance(root->left->right,k-1);
        }
    }
    // return anss;
}
vector<vector<int>> resultt;
void levelordertraversal(struct node *root,int k){
    int i=0;
    vector<int> curr;
    while(i<k){
        kdistance(root,i);
        resultt.push_back(anss);
        anss.clear();
        // curr.clear();
        i++;
    }
}
vector<int> req;
void answer(){
    int vsize=resultt.size();
    for(int i=0;i<vsize;i++){
      req.push_back(resultt[i][0]);  
    }
}
int main(){
    node *root=new node(10);
    // node *root =new node(20);
root->right= new node(60);
root->left =new node(50);
root->right->left=new node(70);
root->right->right=new node(20);
// root->left->right=new node(50);
root->right->left->right=new node(8);
// root->right->left->left=new node(60);
// root->right->left->right=new node(70);
    // cout<<root->key<<endl;
    int heightt=height(root);
    // kdistance(root,0);
    // levelordertraversal(root,heightt);
    // cout<<endl;
    // inorder(root);
    // int size_bt=mainn.size();
    // int newsize= getsize(root);
    // cout<<size_bt<<endl;
    // cout<<newsize<<endl;
    // cout<<maximum_in_bt<<endl;
    levelordertraversal(root,heightt);
    answer();
    for(auto x: req){
        cout<<x<<" ";
    }
    // cout<<req.size();
    // for(int i=0;i<req.size();i++){
    //     cout<<req[i]<<" ";
    // }
    
}
