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
  
     bool solve(TreeNode* root, long minvalue , long maxvalue)
     {
       
       if(root==NULL )
       {
         return true;
       }
       
       if( (root->val > minvalue) and (root->val < maxvalue) and solve(root->left,minvalue,root->val) and solve(root->right,root->val,maxvalue))
         
         
         {
            return true;
          }
       
       
       else{
          return false;
         
       }
       
        
          
        
       }
  
  
    bool isValidBST(TreeNode* root) {
      
       return  solve(root ,LONG_MIN,LONG_MAX);
        
    }
};