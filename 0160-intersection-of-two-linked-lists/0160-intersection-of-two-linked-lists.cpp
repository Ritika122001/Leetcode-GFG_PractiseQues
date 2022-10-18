/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
     int getLength(ListNode* node)
    {
       int count=0;
        while(node!=NULL)
        {
            count++;
            node=node->next;
            
        }
        
        
        return count;
        
        
    }
    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* p=headA;
        ListNode* q = headB;
        int l1 = getLength(p) ;
        int l2 = getLength(q);
        
        if(l1>l2)
        {
            
            int diff = abs(l2-l1);
            while(diff--)
            {
                p=p->next;
            }
            
        }
        
        else{
            
            int diff = abs(l1-l2);
            while(diff--)
            {
                q=q->next;
            }
        }
        
        
        while(p!=NULL and q!=NULL)
        {
            if(p==q)
            {
                return  p;
            }
            
            p=p->next;
            q = q->next;
            
            
        }
        
        return NULL;
        
        
        
    }
};