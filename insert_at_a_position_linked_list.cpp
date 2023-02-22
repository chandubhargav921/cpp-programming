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
    node *temp2=head;
    head=new node(50);
    head->next=temp2;
    node *temp1=head;
    // while(temp1->next->next!=NULL){
    //     temp1=temp1->next;
    // }
    // // delete at last 
    // temp1->next=NULL;
    // node *temp6=temp1->next;
    node *temp10=head;
    while(temp10->next!=NULL){
        cout<<temp10->data<<" ";
        temp10=temp10->next;
    }
    cout<<temp10->data;
    // temp1->next=new node(60);
    
    node *temp3=head;
    int i=0;
    while(temp3->next!=NULL){
        // cout<<temp3->data<<" ";
        temp3=temp3->next;
        i++;
        if(i==1){
            break;
        }
    }
    node *temp8 = temp3->next;
    temp3->next=new node(80);
temp3->next->next=temp8;
    // cout<<temp3->data<<endl;
    // cout<<head->next->data;
    cout<<endl;
    node *temp11=head;
    while(temp11->next!=NULL){
        cout<<temp11->data<<" ";
        temp11=temp11->next;
    }
    cout<<temp11->data;
    // cout<<endl;
    // // delete first node 
    
    // node *temp5=head->next;
    // head->next=NULL;
    // head=temp5;
    // cout<<head->data;
   
   
    return 0;
}