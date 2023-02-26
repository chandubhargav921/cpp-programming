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
int sizee=0;
int maxx=0;
int leftsum=0;
int rightsum=0;
int height(node *head){
    if(head==NULL){
        return 0;
    }else{
        return max(height(head->left),height(head->right)+1);
    }
    return -1;
}
void printkdistance(node *head,int k){
    if(head==NULL){
        return ;
    }
    if(k==0){
        sizee++;
        if(head->data>maxx){
            maxx=head->data;
        }
        leftsum+=head->data;
        cout<<head->data<<" ";
        }
    else{
        // cout<<head->data<<" ";
        printkdistance(head->left,k-1);
        printkdistance(head->right,k-1);
    }
}
void printkdistancee(node *head,int k){
    if(head==NULL){
        return ;
    }
    if(k==0){
        sizee++;
        if(head->data>maxx){
            maxx=head->data;
        }
        rightsum+=head->data;
        cout<<head->data<<" ";
        }
    else{
        // cout<<head->data<<" ";
        printkdistancee(head->left,k-1);
        printkdistancee(head->right,k-1);
    }
}
int main()
{  node *head=new node(20);
   head->left=new node(10);
   head->right=new node(30);
   head->left->left=new node(40);
   head->right->right=new node(50);
   head->left->right=new node(60);
   head->right->left=new node(70);

// cout<<height(head)<<endl;
// cout<<endl;
cout<<"hi"<<endl;
int k=height(head);
cout<<"chandu"<<endl;
int i=0;
while(i<k){
printkdistance(head->left,i);
printkdistancee(head->right,i);
i++;
}
cout<<endl;
// printkdistance(head,k-1);
cout<<"size of the binary tree is "<<sizee<<endl;
cout<<"maximum in the binary tree is "<<maxx<<endl;
cout<<"left sum is "<<leftsum<<endl;
cout<<"right sum is "<<rightsum<<endl;
if(leftsum==head->data&&rightsum==head->data){
    cout<<"the binary tree is balanced"<<endl;
}
    return 0;
}