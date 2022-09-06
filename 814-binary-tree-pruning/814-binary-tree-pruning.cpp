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
    
    bool solve( TreeNode* root)
    {
        
        if(root==NULL)
        {
            return false;
        }
       
       bool  l = solve(root->left);
       bool r =  solve(root->right);
        
        if(root->left && !l)
        {
            root->left=NULL;
        }
        
        if(root->right && !r)
        {
            root->right=NULL;
        }
        
        
        if(root->val==1 || l || r)
        {
            return true;
        }
        
      return false;
       
        
    }
    
    
    TreeNode* pruneTree(TreeNode* root) {
        
       bool ans =  solve(root);
      if(ans)
      {
          return root;
      }
        
        return NULL;
        
    }
};