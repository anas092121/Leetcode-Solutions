class MyStack {
public:
    queue<int> q1,q2;
    // top;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        int size = q1.size();
        while (size > 1) { 
            // Rotate the elements in the queue
            q1.push(q1.front());
            q1.pop();
            size--;
        }
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        int ans = q1.front();
        return ans;
        
    }
    
    bool empty() {
        return(q1.empty());
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