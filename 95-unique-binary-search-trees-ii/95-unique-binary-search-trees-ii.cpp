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
    
    vector<TreeNode*> solve(int st , int end , int n)
        
{
    vector<TreeNode*>trees;
    
    if(st>end)
    {
        trees.push_back(NULL);
        return trees;
    }
 
    for(int i=st; i<=end;i++)
    {
        vector<TreeNode*>l  = solve(st, i-1,n);
        
       
        
        vector<TreeNode*>r = solve(i+1,end,n);
        
        
        for(auto j : l)
        {
            for(auto c: r)
            {
                TreeNode* node = new TreeNode(i);
                node->left=j;
                node->right=c;
                trees.push_back(node);
          }
        }
        
    }
    
    return trees;
    
    
}

    
    vector<TreeNode*> generateTrees(int n) {
        
        return solve(1,n,n);
        
    }
};