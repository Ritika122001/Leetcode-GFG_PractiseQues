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
    
    int sum=0;int cnt=0;int res=0;
    
    int findsum(TreeNode* root)
    {
        
        if(root==NULL)
           return 0;
    
        sum+=root->val;
        cnt++;
        findsum(root->left);
        findsum(root->right);
        return sum;
        
        
    }
    
    
    
    void solve(TreeNode* root)
    {
       
       if(root==NULL)
           return;
        
        int k = findsum(root);
        if((cnt>0 ) and (k/cnt)==root->val)
        {
            res++;
        }
        
        sum=0;
        cnt=0;
        solve(root->left);
        solve(root->right);
       
    }
    
    
    
    
    int averageOfSubtree(TreeNode* root) {
        
      
      solve(root);
        
        return res;
    
    }
};