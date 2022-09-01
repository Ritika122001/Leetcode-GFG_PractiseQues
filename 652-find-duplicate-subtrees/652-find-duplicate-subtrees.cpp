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
    
    
   unordered_map<string , int>mp;
     
    string check(TreeNode* root, vector<TreeNode*>&ans)
    {
        if(root==NULL) return "$";
        string l= check(root->left,ans);
        string r = check(root->right,ans);
        
        string s;
        s = l + "," + r + "," + to_string(root->val);
        cout<<s<<" "<<endl;
        mp[s]++;
        if(mp[s]==2)
        {
            ans.push_back(root);
            
        }
     return s;
        
        // return false;
    }
    
    

    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
       
        vector<TreeNode*>ans;
        // solve(root,ans);
        string temp= check(root,ans);
        return ans;
        
    }
};