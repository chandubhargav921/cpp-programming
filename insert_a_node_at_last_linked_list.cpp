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
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=new node(60);
    node *temp3=head;
    while(temp3->next!=NULL){
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
    cout<<temp3->data;
   
   
    return 0;
}
