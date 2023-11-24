class MinStack {
public:
    stack<long long int> s;
    long long int mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            mini = val;
        }
        else if(val > mini) s.push(val);
        else {
            long long int x = val ;
            x += (val- mini);
            s.push(x);
            mini = val;
        }
    }
    
    void pop() {
        if(s.top() > mini) s.pop();
        else {
            mini = 2*mini - s.top();
            s.pop();
        }
    }
    
    int top() {
        if(s.top() > mini) return s.top();
        else return mini;
    }
    
    int getMin() {
        return mini;
    }
};