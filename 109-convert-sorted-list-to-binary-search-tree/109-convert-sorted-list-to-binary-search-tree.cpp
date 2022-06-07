/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
  TreeNode* solve(vector<int>&ans, int l , int h)
  {
      if(l>h)
      {
          return NULL;
      }
      
      int mid = ceil((float) (l + h)/2);
      TreeNode* node = new TreeNode(ans[mid]);
      node->left = solve(ans,l,mid-1);
      node->right = solve(ans,mid+1,h);
      
      return node;
      
  }
  
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        vector<int>ans;
        
       
        while(head!=NULL)
        {
            ans.push_back(head->val);
            head=head->next;
        }
        
        
        int n = ans.size();
        return solve(ans,0,n-1);
        
    }
};