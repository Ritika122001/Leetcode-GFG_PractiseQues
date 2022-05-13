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
    
    int count(ListNode* head)
    {
        
        ListNode* p=head;
        int cnt=0;
        while(p!=NULL)
        {
            cnt++;
            p=p->next;
        }
        
        return cnt;
        
        
    }
    
    
    void reorderList(ListNode* head) {
        
        
        stack<ListNode*>st;

        int len = count(head);
        
        
        ListNode* q = head;
        ListNode* t= head;
        for(int i=0;i<len;i++)
            
        {
            st.push(q);
            q=q->next;
            
        }

       
        for(int j=0;j<len/2;j++)
        {
            
            ListNode* p = st.top();
            st.pop();
            p->next=t->next;
            t->next=p;
            t=t->next->next;
         
    }
        
        t->next=NULL;
    }
        
};