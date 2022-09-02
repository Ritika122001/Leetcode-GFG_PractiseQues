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
    vector<double> averageOfLevels(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<double>ans;
        q.push(root);
    
        while(!q.empty())
        {
            double avg=0;
            double size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* s = q.front();
                q.pop();
                avg+=s->val;
                  

                 if(s->left)
                 {
                     q.push(s->left);
                  
                    
                     // cout<<avg<<" ";
                     
                 }

                 if(s->right)
                 {
                     q.push(s->right);
                       // cout<<avg<<" ";
                     
                 }
            }
         
            ans.push_back(avg/size);
            
            // if(avg!=0)
            //  {
              
             // }
            
        }
        
        return ans;
   
    }
};