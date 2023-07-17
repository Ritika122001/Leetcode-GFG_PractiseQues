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
     ListNode* reverse(ListNode* head) {
        
   ListNode *p=head;
        ListNode* q=NULL;
        ListNode* r=NULL;
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            
        }
        head=q;
        
        return head;
     }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
    ListNode* p=  reverse(l1);
     ListNode* q= reverse(l2);
        
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
       
        int carry=0;
        while(p!=NULL || q!=NULL || carry)
        {
             int sum=0;
            if(p!=NULL)
            {
                sum+= p->val;
                p=p->next;
            }
            
            if(q!=NULL)
            {
                sum+=q->val;
                q=q->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* ans= new ListNode(sum%10);
            temp->next=ans;
            temp=temp->next;
            
        }
        
        return reverse(dummy->next);
    }
};