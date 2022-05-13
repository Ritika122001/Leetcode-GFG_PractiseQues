/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/


class Solution {
    
public:
    
    Node* connect(Node* root) {
        
        if(root==NULL){
            return NULL;
        }
        
        
        Node* parent=root;
        Node* childhead;
        Node* child;
        
        
        while(parent!=NULL)
        {
            while(parent!=NULL)
            {
                
                      
            if(parent->left)
            {
                if(childhead==NULL)
                {
                    childhead=parent->left;
                    
                }
                
                else{
                    child->next = parent->left;
                    
                    
                }
                
                child = parent->left;
            }
            
            
            
            
              if(parent->right)
            {
                if(childhead==NULL)
                {
                    childhead=parent->right;
                    
                }
                
                else{
                    
                    child->next = parent->right;
                    
                    
                }
                
                child = parent->right;
            }
            
            
            parent = parent->next;
            }
            
            
      
            parent = childhead;
            childhead=child=NULL;
            
            
            
            
        }
    
   
        
        
//            if(root==NULL)
//         {
//             return root;
//         }
        
//         queue<Node*>q;
//         q.push(root);
        
        
//         while(!q.empty())
//         {
//             int size = q.size();
            
//             if(size==0)
//             {
//                 return root;
//             }
            
         
            
//           while(size>0)
//           {
//               Node* node;
              
//               if(size>1)
//               {
                      
                
//                node = q.front();
//                q.pop();
                  
//                   Node* temp = q.front();
//                   node->next = temp;
        
//             }
              
              
              
//             else{
                
//                 node=q.front();
//                 q.pop();
//             }
              
//                    if(node->left!=NULL)
//             {
//                 q.push(node->left);
//             }
            
//             if(node->right!=NULL)
//             {
//                 q.push(node->right);
//             }
//               size--;
          
//           }
              
//           }
        
//         return root;
              
//         }
        
        
//         if(root==NULL)
//         {
//             return NULL;
//         }
        
        
//         Node* node = root;
        
//         while(node->left!=NULL)
//         {
            
//             Node* temp  = node;
            
//             while(node!=NULL)
//             {
                
//                 node->left->next  = node->right;
//                 node->right->next = node->next==NULL ? NULL : node->next->left;
//                 node=  node->next;
                
//             }
            
//             node= temp->left;
            
//         }
        
        
        
        return root;
        
    }  
      
   
};