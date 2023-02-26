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
int height(node *head){
    if(head==NULL){
        return 0;
    }else{
        return max(height(head->left),height(head->right))+1;
    }
}
bool iscsum(node *head){
if(head==NULL){
    return true;
}
if(head->left==NULL&&head->right==NULL){
    return true;
}
int sum=0;
if(head->left!=NULL||head->right!=NULL){
    sum+=head->left->data;
    sum+=head->right->data;
    
}
return(sum==head->data&&iscsum(head->left)&&iscsum(head->right));

}
bool isbalanced(node *head){
    if(head==NULL){
        return true;
    }
    if(head->left==NULL&&head->right==NULL){
        return true;
    }
    int leftheight=0;
    int rightheight=0;
    if(head->left!=NULL||head->right!=NULL){
        leftheight+=height(head->left);
        rightheight+=height(head->right);
        
    }
    return(-1<abs(leftheight-rightheight)&&abs(leftheight-rightheight)<2&&isbalanced(head->left)&&isbalanced(head->right));
}
int main()
{  node *head=new node(30);
  head->left=new node(10);
  head->right=new node(20);
//   head->left->left=new node(40);
  head->right->right=new node(50);
//   head->left->right=new node(60);
//   head->right->left=new node(70);
//   head->right->right->right=new node(90);
//   head->right->right->right->right=new node(100);
//   head->right->right->right->right->right=new node(110);
  cout<<isbalanced(head)<<endl;

    return 0;
}
