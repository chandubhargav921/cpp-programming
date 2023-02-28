#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
bool searchnode(node *head,int key){
    // if(head==NULL){
    //     return false;
    // }
    if(head!=NULL){
        if(head->data==key){
            return true;
        }else if(head->data<key){
            // head=head->right;
           return  searchnode(head->right,key);
        }else{
            // head=head->left;
           return searchnode(head->left,key);
        }
    }
    return false;
}
int main(){
     node *head=new node(15);
     head->left=new node(5);
     head->right=new node(20);
     head->left->left=new node(3);
     head->right->right=new node(80);
     head->right->left=new node(18);
     head->right->left->left=new node(16);
     cout<<searchnode(head,19);
    return 0;
}