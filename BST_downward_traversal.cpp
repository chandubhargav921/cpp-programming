class Solution{
public:
   long long int ans= 0;
    
    
    
    Node *find(Node *root , int target)
    {
        
        if(root == NULL)
        return NULL;
        
        if(root->data == target)
        {
        
            return root;
        }
        
        if(root->data > target)
        {
            return find(root->left , target);
        }
        
        else if(root->data < target)
        {
            return find(root->right , target);
        }
        
       
    }
    
    
    void solve(Node *root , int c)
    {
      if(root == NULL)
      {
          return ;
      }
      
      if( c == 0)
      {
          ans += root->data;
      }
      
      solve(root->left , c-1);
      solve(root->right , c+1);
      
      
    }
    
    


    long long int verticallyDownBST(Node *root,int target)
    {
        
       
       Node *tar = find(root , target);
       
       if(tar == NULL)
       return -1;
       
       solve(tar , 0);
       
       return ans - tar->data;
         
    }
};