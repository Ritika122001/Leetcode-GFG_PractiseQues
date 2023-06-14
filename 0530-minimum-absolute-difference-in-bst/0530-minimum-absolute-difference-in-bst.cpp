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
    
    TreeNode* prev = NULL;
    int minDiff = INT_MAX;
    int getMinimumDifference(TreeNode* root) 
    {
        inorder(root);
        return minDiff;
    }
    
    void inorder(TreeNode* root)
    {
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(prev!=NULL){
            minDiff = min(minDiff, abs((prev->val) - (root->val)));
        }
        prev = root;
        inorder(root->right);
    }

    
//     void inorder(TreeNode* root , vector<int>&ans)
//     {
//         if(root==NULL) return;
        
//         inorder(root->left, ans);
//         ans.push_back(root->val);
//         inorder(root->right, ans);
        
        
//     }
    
//     int getMinimumDifference(TreeNode* root) {
        
//         vector<int>ans;
        
//         inorder(root,ans);
        
//         return abs(ans[1] - ans[0]);
        
//     }
};