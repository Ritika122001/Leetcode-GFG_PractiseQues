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


   #define inf (1<<20)

    map< pair<TreeNode* , pair<bool,bool>> ,int>dp;
class Solution {
        

public:

    
    
    
    int solve(TreeNode* root, bool placecam , bool parcam)
    {
        
        if(root==NULL)
        {
            if(placecam)
            {
                return inf;
            }
            else
                return 0;
        }
        
        
        if(root->left==NULL and root->right==NULL)
        {
            if(placecam)
            {
                return 1;
            }
            else
            {
                
                if(parcam)
                {
                    return 0;
                }
           else
               return inf;
                
            }
                
            
        }
        
        if(dp.find({root,{placecam,parcam}})!=dp.end())
        {
            return  dp[{root,{placecam,parcam}}];
        }
        
        if(placecam)
        {
            
            return dp[{root,{placecam,parcam}}] = 1 + min(solve(root->left,0,1) , solve(root->left,1,1)) + min(solve(root->right,0,1) , solve(root->right,1,1));
                    
            
        }
        
        else{
            
            if(parcam)
            {
                   return dp[{root,{placecam,parcam}}] = min(solve(root->left,0,0) , solve(root->left,1,0)) + min(solve(root->right,0,0) , solve(root->right,1,0));
            }
            
            else{
                
                int op1 = solve(root->left,1,0) + min( solve(root->right,1,0), solve(root->right,0,0));
                int op2 = solve(root->right,1,0) + min(solve(root->left,1,0), solve(root->left,0,0) );
               return dp[{root,{placecam,parcam}}]= min(op1,op2); 
            }
            
               
        }
        
        
        
        
        
        
    }
    
    
    int minCameraCover(TreeNode* root) {
        dp.clear();
     
        return min( solve(root,0,0) , solve(root,1,0));
        
    }
};