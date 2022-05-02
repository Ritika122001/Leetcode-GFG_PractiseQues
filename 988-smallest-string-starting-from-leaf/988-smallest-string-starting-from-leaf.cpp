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
  
  void solve(TreeNode* root, string num, vector<string>&v,vector<string>&mp)
  
  { 
    
      if(root==NULL)
      {
        return;
        
      }
    
      num+= mp[root->val];
      
      if(root->left==NULL and root->right==NULL)
      {
        reverse(num.begin(),num.end());
        v.push_back(num);
        
      }
      
      solve(root->left,num,v,mp);
      solve(root->right,num,v,mp);
      num.pop_back();
  }
  
    string smallestFromLeaf(TreeNode* root) {
        
      string num="";
      
    vector<string> mp = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    
      vector<string>v;
      solve(root,num,v,mp);
      
     sort(v.begin(),v.end());
     
      
     for(int i=0;i<v.size();i++)
     {
       cout<<v[i]<<" ";
     }
      
      cout<<endl;
      
  return v[0];
      
    }
};