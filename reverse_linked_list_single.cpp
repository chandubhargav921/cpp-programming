#include <bits/stdc++.h>

using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
    // ListNode(int x){
    //     val=x;
    //     next=NULL;
    // }
  };
void reverseList(ListNode* head) {
        //  ListNode *prev=NULL;
        //  ListNode *curr=head;
        //  head->prev=NULL;
        // while(curr!=NULL){
        //     if(curr->next==NULL){
        //         return prev;
        //     }
        //    ListNode *temp=curr->next;
        // //    prev=curr;
        //    curr->next=prev;
        //    prev=curr;
           
        // }
        // return prev;
        vector<int> arr;
        ListNode *temp=head;
        ListNode *temppp=head;
        // for(ListNode *curr=head;curr!=NULL;curr=head->next){
        //  arr.push_back(curr->val);
        // //  temp=curr;
        // }
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
          cout<<"helll000000000o"<<endl;
        // for(ListNode *curr=head;curr!=NULL;curr=head->next){
        //     curr->val=arr.back();
        //     arr.pop_back();
        // }
        while(temp!=NULL){
            //   cout<<"helgggggggllo"<<endl;
            temp->val=arr.back();
            cout<<temp->val<<" ";
            arr.pop_back();
            temp=temp->next;
            
        }
        // return head;
    };
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        while(list1!=NULL){
            v.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            v.push_back(list2->val);
            list2=list2->next;
        }
        sort(v.begin(),v.end());
        ListNode *head=new ListNode(v[0]);
        ListNode *temp=head;
        int i=1;
        while(i<v.size()){
          head->next=new ListNode(v[i]);
          head=head->next;
          i++;
        }
        return temp;
    }

int main()
{
    // cout<<"Hello World";
    ListNode *head=new ListNode(10);
    head->next=new ListNode(20);
    head->next->next=new ListNode(30);
    head->next->next->next=new ListNode(40);
    ListNode *tempp;
    cout<<"helllo"<<endl;
    reverseList(head);
    // cout<<tempp->val;
    // while(tempp!=NULL){
    //     cout<<tempp->val<<" ";
    //     tempp=tempp->next;
        
        
    // }

    return 0;
}
