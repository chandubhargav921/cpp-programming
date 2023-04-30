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
int main(){
    node *head=new node(30);
    head->right=new node(29);
    head->left=new node(28);
    head->right->right=new node(34);
    // node *temp=head;
    // while(temp->right!=NULL){
    //     // node *temp=head;
    //     cout<<temp->data<<" ";
    //     // node *temp=head->right;
    //     // temp=head->right;
    //     temp=temp->right;
    // }
    // return 0;
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}