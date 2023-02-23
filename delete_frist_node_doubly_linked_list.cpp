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
  cout<<"before deleting the first node: ";
    while(head->next!=NULL){
      cout<<head->data<<" ";
      head=head->next;
  }
 
  cout<<head->data<<endl;
   head=temp->prev;
   node *temp2=head;
   head=head->next;
   head->prev=NULL;
   delete temp2;
        cout<<"after deleting the first node: ";
     while(head->next!=NULL){
       cout<<head->data<<" ";
       head=head->next;
   }
   cout<<head->data;
    return 0;
}