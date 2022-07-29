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
    
int i=0;
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        //int rootidx =0;
        
       TreeNode* root =  build(0,preorder,preorder.size()-1, inorder);
        
        return root;
        
        
    }
    
    
    int search(vector<int>& inorder, int start, int end, int curr)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==curr)
            {
                return i;
            }
        }
        
        return -1;
    }
    
    
    TreeNode* build(int start,vector<int>& preorder,int end,vector<int>& inorder)
    {
        
        if(start>end)
        {
            return NULL;
        }
        
      
    
        int curr = preorder[i];
        i++;
       

        
        
        TreeNode* node = new TreeNode(curr);
        
      
        int pos = search(inorder,start,end,curr);
        
        node->left = build(start,preorder,pos-1,inorder);
        node->right = build(pos+1,preorder,end,inorder);
        
 return node;
        
        /*
        if(start>end) { return NULL; }
        int pivot= start; 
        while(inorder[pivot] != preorder[rootidx]) pivot++; 
        rootidx++; TreeNode* node = new TreeNode(inorder[pivot]);
        node->left = build(start,preorder,pivot-1,inorder,rootidx); 
        node->right = build(pivot+1,preorder,end,inorder,rootidx); 
        return  node;*/
        
    }
};