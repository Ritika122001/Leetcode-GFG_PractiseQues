/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
        
        if(!head)
        {
            return NULL;
        }
        
        Node* original = head;
        Node* oldhead = head;
        Node* copyhead = new Node(head->val);
        Node* chead = copyhead;
        unordered_map<Node*,Node*>mp;
        mp[oldhead] = chead;
        
        while(oldhead->next)
        {
            chead->next = new Node(oldhead->next->val);
            chead->random = NULL;
            oldhead = oldhead->next;
            chead = chead->next;  
            mp[oldhead] =   chead;

        }
        
        oldhead = original;
        chead = copyhead;
        
        
        while(oldhead && chead)
        {
            chead->random = oldhead->random ?  mp[oldhead->random] : nullptr;
            chead = chead->next;
            oldhead = oldhead->next;
            
        }
        
        
        return copyhead;
      
    }
};