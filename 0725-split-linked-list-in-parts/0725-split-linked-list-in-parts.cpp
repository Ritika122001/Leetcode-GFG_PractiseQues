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
    int len(ListNode* p)
    {
        int count=0;
        while(p!=NULL)
        {
            p=p->next;
            count++;
        }
        return count;
        
    }
    
    
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        
        int length = len(head);
        vector<ListNode*>ans;
        int partsize=length/k;
        ListNode* p=head;
        ListNode* q=NULL;
        int remainingnodes = length%k;
        
        while(head)
        {
            int x = partsize;
            ans.push_back(p);
            
            while(x>0)
            {
                q=p;
                p=p->next;
                x--;
            }
            
            if(remainingnodes!=0 and p!=NULL)
            {
                q=p;
                p=p->next;
                remainingnodes--;
            }
            
            if(q!=NULL)
            {
                head=p;
                q->next=NULL;
            }
        }
        
        while(ans.size()!=k)
        {
            ans.push_back(NULL);
        }
        
        return ans;
        
        
        
        
    }
};