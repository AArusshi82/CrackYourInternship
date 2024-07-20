class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    void push(int x) {
        q.push(x);
      for(int i=0;i<q.size()-1;i++)
      {
        q.push(q.front());
        q.pop();
        
      }  
    }
    
    int pop() {
        int v=0;
        if(!q.empty())
        {
            v=q.front();
            q.pop();
    }
    return v;
    }
    
    int top() {
        int v=q.front();
        return v;
    }
    
    bool empty() {
        return q.empty();
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