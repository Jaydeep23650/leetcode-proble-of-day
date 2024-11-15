class MyStack {
public:
   
    MyStack() {
        
    }
    queue<int>q;

    void push(int x) {
        q.push(x);
        int n=q.size();
        for(int i=0;i<n-1;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        if(!q.empty()){
            int ans=q.front();
            q.pop();
            return ans;
        } return NULL;
    }
    
    int top() {
       if(!q.empty()){
            int ans=q.front();
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