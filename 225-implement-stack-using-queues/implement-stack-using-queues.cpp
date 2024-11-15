class MyStack {
public:
   
    MyStack() {
        
    }
    deque<int>q;

    void push(int x) {
        q.push_back(x);
    }
    
    int pop() {
        if(!q.empty()){
            int ans=q.back();
            q.pop_back();
            return ans;
        } return NULL;
    }
    
    int top() {
       if(!q.empty()){
            int ans=q.back();
            return ans;
        } else return -1;
    }
    
    bool empty() {
        if(q.empty())return true;
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