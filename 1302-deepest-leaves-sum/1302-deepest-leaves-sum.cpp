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
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        
        
        int sum=0;
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
                
                
             TreeNode* node = q.front();   
            sum+=node->val;
            q.pop();
                
                if(node->left)
                {
                    q.push(node->left);
                }
                
                if(node->right)
                {
                    q.push(node->right);
                }
                
            }
            
            
            if(!q.empty())
            {
                sum=0;
            }
            
            
            
            
            
        }
        
        return sum;
        
        
        
        
        
    }
};