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
    cout<<head->next->
    data<<endl;
    return 0;
}
