#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
void reorderList(ListNode* head) {
        ListNode *temp=head;
         ListNode *tempp=head;
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        cout<<"hi"<<endl;
        int num=0;
        while(temp!=NULL){
            if(num%2==0){
        temp->val=v.front();
        auto itr=v.begin();
        v.erase(itr);
        cout<<"faa"<<endl;
        temp=temp->next;
        num++;
        }else{
            cout<<"eme"<<endl;
         temp->val=*(--v.end());
         v.erase(--v.end());
         temp=temp->next;
         num++;
        }
        }
        cout<<"hello"<<endl;
        cout<<tempp->val<<endl;
        while(tempp!=NULL){
            cout<<tempp->val<<" ";
            tempp=tempp->next;
        }
    };
int main()
{  ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    reorderList(head);

    return 0;
}
