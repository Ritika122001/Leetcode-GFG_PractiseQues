class MyStack {
public:
    
    queue<int>q1;
    queue<int>q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
    
         if(q1.empty())
         {
             q1.push(x);
         }
        else
        {
            while(!q1.empty())
            {
                int x2 = q1.front();
                q1.pop();
                q2.push(x2);   
            }
            
            q1.push(x);
        }
        
        while(!q2.empty())
        {
            int x2 = q2.front();
            q2.pop();
            q1.push(x2);  
        }
        
        
        
    }
    
    int pop() {
        
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        
        int y = q1.front();
        return y;
    }
    
    bool empty() {
        
        if(q1.empty())
        {
            return true;
        }
        
        else
            return false;
    }
};
 
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */