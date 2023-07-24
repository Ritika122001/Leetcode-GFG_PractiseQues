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
    vector<TreeNode*> generate(int n){
        if(n==1) return {new TreeNode(0)};
        vector<TreeNode*> trees;
        n--;
        vector<TreeNode*> leftchoice,rightchoice;
        for(int i=1;i<n;i+=2){
            leftchoice=generate(i);
            rightchoice=generate(n-i);
            for(TreeNode* j:leftchoice){
                for(TreeNode* k:rightchoice){
                    TreeNode* root=new TreeNode(0);
                    root->left=j;
                    root->right=k;
                    trees.push_back(root);
                }
            }
        }
        return trees;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        return generate(n);
    }

};