#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};
int main(){
    node *head=new node(10);
    head->next=new node(20);
    node *temp=head->next;
   temp->prev=head;
   temp->next=new node(30);
  cout<<"before deleting the last node: ";
    while(head->next!=NULL){
      cout<<head->data<<" ";
      head=head->next;
  }
 
  cout<<head->data<<endl;
   head=temp->prev;
 while(head->next!=NULL){
     head=head->next;
     
 }
 node *temp4=head;
 head->prev=NULL;
 temp4->prev=NULL;
 delete temp4;
 head=temp->prev;
 cout<<" after deleting the last node: ";
 while(head->next!=NULL){
     cout<<head->data<<" ";
     head=head->next;
 }
//  cout<<head->data;
    return 0;
}