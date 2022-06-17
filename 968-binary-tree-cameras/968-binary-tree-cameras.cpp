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


// 1 Approach->

//using DFS RECURSION //

// 3cases 
   // (1,0) --> 1 + both child can have 1/0 ( +  with thier min ans; )
// (1,1)--> same case 1;
// (0,1)--->both child can have 1/0
// (0,0) --> force c1 to have 1 and give c2 option 1/0 and vice versa





// 2 Approach


   #define inf (1<<20)

    map< pair<TreeNode* , pair<bool,bool>> ,int>dp;
class Solution {
        

public:
    int camera=0;

    
    int solve(TreeNode* root)
    {
        
        
        if(root==NULL) return 1;
        
        int l = solve(root->left);
        int r= solve(root->right);
        if(l==-1 || r==-1)
        {
            camera++;
            return 0;
        }
        
        if(l==0 || r==0)
        {
            return 1;
        }
        
        return -1;
        
        
        
        
        
        
    }
    
//     int solve(TreeNode* root, bool placecam , bool parcam)
//     {
        
//         if(root==NULL)
//         {
//             if(placecam)
//             {
//                 return inf;
//             }
//             else
//                 return 0;
//         }
        
        
//         if(root->left==NULL and root->right==NULL)
//         {
//             if(placecam)
//             {
//                 return 1;
//             }
//             else
//             {
                
//                 if(parcam)
//                 {
//                     return 0;
//                 }
//            else
//                return inf;
                
//             }
                
            
//         }
        
//         if(dp.find({root,{placecam,parcam}})!=dp.end())
//         {
//             return  dp[{root,{placecam,parcam}}];
//         }
        
//         if(placecam)
//         {
            
//             return dp[{root,{placecam,parcam}}] = 1 + min(solve(root->left,0,1) , solve(root->left,1,1)) + min(solve(root->right,0,1) , solve(root->right,1,1));
                    
            
//         }
        
//         else{
            
//             if(parcam)
//             {
//                    return dp[{root,{placecam,parcam}}] = min(solve(root->left,0,0) , solve(root->left,1,0)) + min(solve(root->right,0,0) , solve(root->right,1,0));
//             }
            
//             else{
                
//                 int op1 = solve(root->left,1,0) + min( solve(root->right,1,0), solve(root->right,0,0));
//                 int op2 = solve(root->right,1,0) + min(solve(root->left,1,0), solve(root->left,0,0) );
//                return dp[{root,{placecam,parcam}}]= min(op1,op2); 
//             }
            
               
//         }
        
        
        
        
        
        
//     }
    
    
    int minCameraCover(TreeNode* root) {
        
        
        if(solve(root)==-1)
        {
            
            camera++;
        }
        
        return camera;
        
        
//         dp.clear();
     
//         return min( solve(root,0,0) , solve(root,1,0));
        
    }
};