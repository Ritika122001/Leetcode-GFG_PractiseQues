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
    void solve(TreeNode* root , int targetSum , vector<vector<int>>&ans, vector<int>res)
    {
        if(root==NULL) return;
        
        res.push_back(root->val);
        
        
      
        if(targetSum-root->val==0 and root->left==NULL and root->right==NULL)
        {
          
          ans.push_back(res);
             
            return;
            
        }
        
     
     
        solve(root->left,targetSum-root->val,ans,res);
        // cout<<"RETURNING"<<" ";
        
        // cout<<"Popping"<<" ";
        solve(root->right,targetSum-root->val,ans,res);
        res.pop_back();
        
        //leaf node    
        
        
        
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      
        vector<vector<int>>ans;
   
        vector<int>res;
        solve(root,targetSum,ans,res);
    
        return ans;
        
    }
};