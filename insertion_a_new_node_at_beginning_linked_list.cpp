#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    node *temp=head->next;
    temp->next=new node(30);
    // cout<<head->next->data<<endl;
    // node *temp1=head;
    // head = new node(40);
    // head->next=temp1;
    // node *come = new node(50);
    // come->next=head;
    // node *temp1=head;
    // // temp1=head;
    node *temp2=head;
    head=new node(50);
    head->next=temp2;
    node *temp1=head;
   
    while(temp1->next!=NULL){
        
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
     if(temp1->next==NULL){
        
    cout<<temp1->data<<" ";
    }
    // cout<<head->data<<endl;
    // cout<<temp1->data;
    return 0;
}
