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
  
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      
      
    
     
      vector<vector<int>>ans;
        if(root==NULL)
      {
        return ans;
      }
      
      queue<TreeNode*>q;
      q.push(root);
      
      while(!q.empty())
      {
        
         int size = q.size();

         vector<int>vec;
        
       while(size--)
       {
         
        
          TreeNode* x = q.front();
         q.pop();
        
         
         if(x->left!=NULL)
         {
              q.push(x->left);
           
         }
         
         if(x->right!=NULL)
         {
           
           q.push(x->right);
         }
      
         
          vec.push_back(x->val);
        
         
       }
        
        ans.push_back(vec);
        
      }
      
      reverse(ans.begin(),ans.end());
      return ans;
       
        
    }
};