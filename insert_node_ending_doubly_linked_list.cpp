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
    node *ini=new node(30);
    ini->next=head;
    head->prev=ini;
    cout<<head->next->data<<endl;
    cout<<temp->prev->data<<endl;
    while(ini->next!=NULL){
        // cout<<ini->data<<" ";
        ini=ini->next;
    }
    // cout<<ini->data;
    ini->next=new node(40);
    ini->next->prev=ini->next;
    ini=head->prev;
      while(ini->next!=NULL){
        cout<<ini->data<<" ";
        ini=ini->next;
    }
    cout<<ini->data;
    return 0;
}