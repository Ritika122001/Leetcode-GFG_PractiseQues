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

    
    void flatten(TreeNode* root) 
    
    {
        
   // 1st Approach : -     //reverse preorder 
        
//         if(root==NULL)
//         {
//             return;
//         }
        
//         flatten(root->right);
//         flatten(root->left);
        
//         root->right = prev;
//         root->left=NULL;
//         prev=root;
        
        
        
//         2nd Approach  : -using Stack
        
//          if(root== NULL)
//             return;
        
//         stack<TreeNode*>st; //LIFO ORDER
//         st.push(root);
        
//         while(!st.empty())
//         {
            
            
//             TreeNode* node = st.top();
//             st.pop();
            
//             if(node->right) st.push(node->right); traverse right 
            
//             if(node->left) st.push(node->left); traverse left
            
//             if(!st.empty())
//                 node->right = st.top();       
            
//             node->left=NULL;
         
            
//         }
        
        
        
        //3rd Approach using Morris Traversal

        
        
        if(root == NULL) return;

    TreeNode *curr = root;
    while(curr != NULL)
    {
        if(curr->left != NULL)
        {
            TreeNode * prev = curr->left;
        while(prev->right)
        
            prev = prev->right;
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        
        curr = curr->right;
       }     
}
    
    

    
};