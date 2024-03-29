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
  
  void solve(TreeNode* root, string &num, vector<string>&v)
  
  { 
      if(root==NULL)
      {
        return;
        
      }
    
    num+= to_string(root->val);
      
      if(root->left==NULL and root->right==NULL)
      {
        v.push_back(num);
        
      }
      
      solve(root->left,num,v);
      solve(root->right,num,v);
      num.pop_back();
  }
  
    int sumNumbers(TreeNode* root) {
      
      string num="";
      
      int sum=0;
      vector<string>v;
      solve(root,num,v);
      
     for(auto &c: v)
      {
        sum+=stoi(c);
      }
      
   return sum;
      
      
      
        
    }
};