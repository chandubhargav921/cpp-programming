class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        /*optimized*/
        Node* temp1 = head1;
        Node* temp2 = head2;
        int len1 = 0, len2 = 0;
        while(temp1){
            temp1 = temp1->next;
            len1++;
        }
        while(temp2){
            temp2 = temp2->next;
            len2++;
        }
        int diff = len1 - len2;
        if(diff < 0) while(diff++ != 0) head2 = head2->next; //second list is longer;
        
        else while(diff-- != 0) head1 = head1->next;
        
        while(head1){
            if(head1 == head2) return head1->data;
            head1 = head1->next;
            head2 = head2->next;
        }
        return -1;
    }
};