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
  
  bool equal(TreeNode* root , TreeNode* subRoot)
  {
    
    if(root==NULL and subRoot==NULL)
      {
        return true;
      }
      
   if(root==NULL || subRoot==NULL)
      {
        return false;
      }
    
      if(root->val==subRoot->val)
      {
        return equal(root->left,subRoot->left) and  equal(root->right, subRoot->right);
      }
    
    else 
      
      return false; 
    
    
  }
  
  
   
  
  
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
      
      if(subRoot==NULL)
      {
        return true;
      }
      
        if(root==NULL)
      {
        return false;
      }
      
      if(equal(root,subRoot))
      {
        return true;
      }
      
     //if not equal then traverse left and right on root puls subtree
      
          return  isSubtree(root->left,subRoot) || isSubtree(root->right, subRoot);
       
    
      
    }
};