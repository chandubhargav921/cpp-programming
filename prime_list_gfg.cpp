class Solution{
public:
    bool is_prime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
    Node *primeList(Node *head){
        Node *temp = head;
      while(temp!=NULL){
          
          int n = temp->val;
          int i =0;
          while(!is_prime(n-i) && !is_prime(n+i)){
              i++;
          }
          if(is_prime(n-i)){
              temp->val = n-i;
          }
          else{
              temp->val = n+i;
          }
          temp = temp->next;
      }
      return head;
    }
};