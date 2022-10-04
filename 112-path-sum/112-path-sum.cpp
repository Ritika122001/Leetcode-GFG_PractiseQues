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
    
    bool solve(TreeNode* root , int targetSum)
    {
        
        if(root==NULL) return false;
        
        // if(targetSum<0)
        // {
        //     return false;
        // }
        
        if(targetSum-root->val==0 and root->left==NULL and root->right==NULL)
        {
            
            return true;
        }
 
        
      return solve(root->left,targetSum-root->val) || solve(root->right,targetSum-root->val);
        
      
        
    }
    
    
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return solve(root,targetSum);
        
    }
};