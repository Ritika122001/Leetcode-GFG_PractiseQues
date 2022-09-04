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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        
         map<int,vector<int>> mp;
        queue<pair<int,TreeNode*>> q;
        q.push({0,root});
        while(!q.empty()){
            int sz=q.size();
            unordered_map<int,vector<int>> temp;
            while(sz--){
                auto tmp=q.front();
                q.pop();
                temp[tmp.first].push_back(tmp.second->val);
                if(tmp.second->left != NULL) q.push({tmp.first-1,tmp.second->left});
                if(tmp.second->right != NULL) q.push({tmp.first+1,tmp.second->right});
            }
            for(auto i:temp){
                sort(i.second.begin(),i.second.end());
                for(int j: i.second){
                    mp[i.first].push_back(j);
                }
            }
        }
        vector<vector<int>> ans;
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
        
    }
};