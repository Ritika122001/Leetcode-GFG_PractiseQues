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
  
  private:
  

  stack<TreeNode*>st1;
  stack<TreeNode*>st2;
  
public:
  
  void pushleft( stack<TreeNode*> &st1,TreeNode* root)
  {
     while(root!=NULL)
      {
        st1.push(root);
        root=root->left;
     
      }
  }
  
  void pushright( stack<TreeNode*>&st2,TreeNode* root)
  {
     while(root!=NULL)
      {
        st2.push(root);
        root=root->right;
     
      }
  }
  
    bool findTarget(TreeNode* root, int k) {
      
       pushleft(st1,root);
       pushright(st2,root);
      
      TreeNode* l = st1.top();
      TreeNode* h = st2.top();
      
      while(l and h and l->val<h->val)
        
      {
        int sum = l->val+h->val;
        
        if( sum < k )
        {
          pushleft(st1,l->right);
          l = st1.top();
          st1.pop();
          
        }
        
        
        else if(sum > k)
        {
           pushright(st2,h->left);
          h=st2.top();
          st2.pop();
        }
        
        else{
          
          return true;
          
        }
      }
      
      return false;
   
    }
};