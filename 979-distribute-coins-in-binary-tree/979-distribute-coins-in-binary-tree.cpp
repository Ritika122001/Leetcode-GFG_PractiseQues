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
    
    
    
    void solve(TreeNode* parent , TreeNode* current, int &ans)
    {
        
        // int ans=0;
        
        if(!current)
        {
            return;
        }
        
        solve(current,current->left,ans);
        solve(current,current->right,ans);
        if(current->val>1)
        {
            
            int extra = current->val - 1;
            parent->val+= extra;
            current->val=1;
            ans+=extra;
            
        }
        
        else if(current->val<1)
        {
            
            int needed = 1+abs(current->val);
            parent->val-=needed;
            current->val=1;
            ans+=needed;
        }
            
        
        
        
        
        
    }
    
    
    int distributeCoins(TreeNode* root) {
        
        
        int ans=0;
        solve(root,root,ans);
        return ans;
        

    
        
    }
};