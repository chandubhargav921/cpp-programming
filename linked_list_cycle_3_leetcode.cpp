class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode*slow=head,*fast=head,*curr=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){ //meet point
        while(curr!=fast){
            fast=fast->next;
            curr=curr->next;
        }
        return fast;

        }
        }
        return NULL;

    }
};