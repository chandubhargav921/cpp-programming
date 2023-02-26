class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *head){
    if(head==NULL){
        return 0;
    }else{
        return max(height(head->left),height(head->right))+1;
    }
}
    
    bool isBalanced(Node *head){
    if(head==NULL){
        return true;
    }
    if(head->left==NULL&&head->right==NULL){
        return true;
    }
    int leftheight=0;
    int rightheight=0;
    if(head->left!=NULL||head->right!=NULL){
        leftheight+=height(head->left);
        rightheight+=height(head->right);
        
    }
    return(-1<abs(leftheight-rightheight)&&abs(leftheight-rightheight)<2&&isBalanced(head->left)&&isBalanced(head->right));
}
};