#include <bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
vector<int> vleft;
vector<int> vright;
void lefttree(node *head){
    // if(head==NULL){
    //     return ;
    // }
    // if(head->left==NULL){
    //     return ;
    // }
    vleft.push_back(head->data);
    lefttree(head->left);
    cout<<vleft.back()<<" ";
    lefttree(head->left->right);
}
void inorder(node *head){
    if(head==NULL){
        return ;
    }
    cout<<head->data<<" ";
    inorder(head->left);
    inorder(head->right);
}
int main()
{  node *head=new node(20);
   head->left=new node(10);
   head->right=new node(30);
   head->left->left=new node(40);
   head->right->right=new node(50);
   head->left->right=new node(60);
   head->right->left=new node(70);
   cout<<head->data<<" ";
   inorder(head->left);
   cout<<endl;
   cout<<head->data<<" ";
   inorder(head->right);
//   for(auto x:vleft){
//       cout<<x<<" ";
//   }
    
    return 0;
}
