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
  
    
    bool getpath(TreeNode *root,int value,string &str )
    {
        
        
        if(root==NULL)
        {
            return false;
        }
        
        if(root->val==value)
        {
            return true;
        }
        
        
       str.push_back('L');
        if(getpath(root->left,value,str)) //if found return true
            return true;
        str.pop_back(); //if not found backtrack
        
        str.push_back('R');
        if(getpath(root->right,value,str))
            return true;
        str.pop_back();
        
        return false;
        
        
        
        
    }
    
    TreeNode* findlca(TreeNode* root, int startvalue , int destvalue)
    {
        
        
        if(root==NULL || root->val == startvalue || root->val==destvalue)
        {
            return root;
        }
        
     
        TreeNode* left = findlca(root->left,startvalue,destvalue);
        TreeNode* right = findlca(root->right , startvalue , destvalue);
        
        
        if(left==NULL)
        {
            
            return right;
            
        }
        
       if(right==NULL)
       {
           return left;
       }
        
        return root;
        
        
        
    }
    
    string getDirections(TreeNode* root, int startvalue, int destvalue) {
        
        
        TreeNode* lca = findlca(root,startvalue,destvalue);

        
        string s1="";
        getpath(lca,startvalue,s1);
        string ans="";
        for(auto x:s1)
        {
           ans+='U'; 
        }
        s1="";
        getpath(lca,destvalue,s1);
        return ans+s1;
        
       
        
        
        
    }
};