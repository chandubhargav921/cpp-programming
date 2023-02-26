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
int main()
{  node *head=new node(30);
   head->left=new node(10);
   head->right=new node(20);
//   head->left->left=new node(40);
//   head->right->right=new node(50);
//   head->left->right=new node(60);
//   head->right->left=new node(70);
   cout<<iscsum(head)<<endl;
    return 0;
}
