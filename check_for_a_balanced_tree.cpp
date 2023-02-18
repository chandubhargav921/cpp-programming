 int lheight(Node *root){
        if(root==NULL){
            return 0;
        }
        else{
        return lheight(root->left)+1;
    }
    }
    int rheight(Node *root){
        if(root==NULL){
            return 0;
        }
        else{
        return rheight(root->right);
    }
    }
    int height(Node *root){
        if(root==NULL){
            return 0;
        }else{
            return max(height(root->left),height(root->right))+1;
        }
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL){
            return 1;
        }
        int left_height=height(root->left);
        // lheight(root);
        int right_height=height(root->right);
        // rheight(root);
        int now= max(left_height,right_height);
        int then= left_height+right_height-now;
        if((abs(left_height-right_height)<=1)&&(isBalanced(root->left))&&(isBalanced(root->right))){
            return true;
        }
     return false;   
    }