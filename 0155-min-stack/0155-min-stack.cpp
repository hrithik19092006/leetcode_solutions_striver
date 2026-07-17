class MinStack {
public:
    stack<long long> st;
    long long mini = INT_MAX;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(value < mini){
                long long new_value = 2LL * value - mini;
                st.push(new_value);
                mini = value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.top() >= mini){
            st.pop();
        }
        else{
            long long new_mini = 2LL * mini - st.top();
            mini = new_mini;
            st.pop();
        }
        if(st.empty()){
            mini = INT_MAX;
        }
    }
    
    int top() {
        if(st.top() >= mini){
            return st.top();
        }
        else{
            return mini;
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */