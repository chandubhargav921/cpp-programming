/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        ListNode *tempp=head;
         ListNode *temppp=head;
  vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        v.erase(v.end()-n);
        // tempp->val=v[0];
        // auto itrr=v.begin();
        // v.erase(itrr);
        // auto itrr=v.begin();
        // v.erase(itrr);
        while(!v.empty()){
         auto itr=v.begin();
         int tempd=*itr;
         v.erase(itr);
          tempp=tempp->next;
          tempp->val=tempd;

        }
        // int i=0;
        // int total=v.size();
        // while(i<total-n-1){
        //     temppp=temppp->next;
        //     i++;
        // }
        // cout<<tempp->val;
        // ListNode *rmm=temppp;
        // ListNode *rmp=temppp->next;
        // temppp->next=rmp;
        return temppp->next;
    }
};