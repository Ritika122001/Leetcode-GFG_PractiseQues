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
    
    
    int getlength(ListNode* node)
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
        
   
        ListNode* p= headA;
        ListNode* q = headB;
        int count1 = getlength(p);
        int count2 = getlength(q);
        
          int d = abs(count1-count2);
        if(count1 > count2 )
        {
            for(int i=0;i<d;i++)
            {
                p = p->next;
            }
        }
        
          else 
        {
         
            for(int i=0;i<d;i++)
            {
                q = q->next;
            }
        }
        
        while(p!=NULL and q!=NULL)
        {
            if(p == q)
            {
                return p;
            }
            
            p=p->next;
            q=q->next;
        }
        
        return NULL;
        
        
    }
};