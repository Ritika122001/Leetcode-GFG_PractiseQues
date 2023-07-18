class LRUCache {
public:
    
    class Node{
    public:
    int val,key;
    Node *next,*prev;
    Node(int key,int val){
        this->key=key;
        this->val=val;
        
    }
    
};
    
Node* head= new Node(-1,-1);
Node* tail=new Node(-1,-1);
int c;
unordered_map<int,Node*>mp;


    
    LRUCache(int capacity) {
        c=capacity;
        head->next=tail;
        tail->prev=head;

        
    }
    
    void addNode(Node* node)
    {
            
        Node* t = head->next;
        head->next = node;
        node->next = t;
        t->prev = node;
        node->prev = head;
        
        
    }
    
    int get(int key) {
       
        if(mp.find(key)==mp.end())
        {
            return -1;
        }
        //if key is present , than update the node and return the value associated with the key
        // for update first we remove the node and then add at start of list with the help of insert function
        Node *currnode = mp[key];
        remove(currnode);
        insert(currnode);
        return currnode->val;

        
    }
    
    void remove(Node* t)
    {
        mp.erase(t->key);
        t->next->prev = t->prev;
        t->prev->next = t->next; 
        
        
    }
    
    void insert ( Node* currnode)
    {
        currnode->next = head->next;                      // adding node in next of head (front of our cache)
        head->next->prev = currnode;
        head->next= currnode;
        currnode->prev= head;
        mp[currnode->key]=currnode;                       //update map accordingly
    }

    
    void put(int key, int value) {
    
        
        if(mp.find(key)!=mp.end())
        {
            remove(mp[key]);
        }
        
        else
        {
            
            if(mp.size()==c)
            {
                remove(tail->prev);
            }
            
        }
        
        insert(new Node(key,value));
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */