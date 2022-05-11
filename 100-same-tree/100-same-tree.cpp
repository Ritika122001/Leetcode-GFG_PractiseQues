/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  
  bool equal(TreeNode* p , TreeNode* q)
  {
      if(p==NULL and q==NULL)
      {
        return true;
      }
      
      if(p==NULL || q==NULL)
      {
        return false;
        
      }
      
    
    if(p->val == q->val)
    {
      return equal(p->left,q->left) and equal(p->right,q->right);
    }
    
    else
      return false;
    
  }
  
  
  
  
    bool isSameTree(TreeNode* p, TreeNode* q) {
      
        if(p==NULL and q==NULL)
      {
        return true;
      }
      
      if(p==NULL || q==NULL)
      {
        return false;
        
      }
      
    
   if(equal(p,q))
   {
     return true;
   }
      
     return isSameTree(p->left, q) || isSameTree(p->right,q);
   
    }
};