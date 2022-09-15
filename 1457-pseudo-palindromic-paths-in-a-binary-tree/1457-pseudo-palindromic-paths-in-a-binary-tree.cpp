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
    int ans = 0;
    bool isPalin(vector<int> vec){
        int oddCount=0;
        int evenCount=0;
       for(int i=1;i<=9;i++){
           if(vec[i]&1)oddCount++;
           else evenCount++;
       } 
       if(oddCount>1)return false;
       return true; 
    }
    void palinPath(TreeNode* root,vector<int> &vec){
        if(root==NULL)return;
        if(root->left==NULL and root->right==NULL){
            vec[root->val]++;
            if(isPalin(vec))ans++;
            vec[root->val]--;
            return;
        }
        
        vec[root->val]++;
        palinPath(root->left,vec);
        palinPath(root->right,vec);
        vec[root->val]--;
        return;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> vec(10,0);
        palinPath(root,vec);
        return ans;
    }
};