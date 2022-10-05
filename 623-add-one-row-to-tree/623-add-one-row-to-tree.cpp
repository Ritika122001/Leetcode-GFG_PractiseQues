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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        
        if(depth==1)
        {
            TreeNode* node = new TreeNode(val);
            node->left=root;
            return node;
        }
   
               queue<TreeNode*>q;
        q.push(root);
        int level=1;
        
        while(!q.empty())
        {
            int size = q.size();
            
            
            for(int i=0;i<size;i++)
            {
             
                TreeNode* node = q.front();
                q.pop();
              
            if(level==depth-1)
            {
                
                    TreeNode* n1 = new TreeNode(val);
                    TreeNode* n2 = new TreeNode(val);
                    TreeNode* l = node->left;
                    TreeNode* r = node->right;
                    n1->left = l;
                    n2->right=r;
                    node->left= n1;
                    node->right = n2;
                   
                
            }
                
                else{
                    
                      
                if(node->left)
                {
                    q.push(node->left);
                }
                
                if(node->right)
                {
                    q.push(node->right);
                }      
                    
                }

                
            }
            
            if(level == depth-1)
            {
               return root;
            }
            
            level++;
        
        }
    
        
        return root;
        
        
        
    }
};