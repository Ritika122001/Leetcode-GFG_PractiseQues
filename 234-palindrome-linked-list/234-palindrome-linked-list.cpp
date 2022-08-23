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
class Solution {
public:
    
    
    ListNode* reverse(ListNode* root)
    {
        
        ListNode* r =NULL;
        ListNode* q = NULL;
        ListNode* p = root;
        
        while(p!=NULL)
        {
          
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            
            
        }
        
        root=q;
        return root;
        
        
        
        
    }
    
    bool isPalindrome(ListNode* head) {
        
//        find middle node using slow and fast pointer or length/2;
        
        ListNode* p = head;
        ListNode* q =head;
        
        while(p->next!=NULL and p->next->next!=NULL)
        {
            p=p->next->next;
            q=q->next;
        }
        
        
        q->next = reverse(q->next);
        q=q->next;
        
        
//         check for palindrome
        
         p = head;
        
       
        while(q!=NULL)
        {
            if(p->val!=q->val)
            {
                return false;
                
            }
                else{
                       p=p->next;
            q=q->next;
                }
            
         
            
        }
        
        return true;
        
        
        
    }
};