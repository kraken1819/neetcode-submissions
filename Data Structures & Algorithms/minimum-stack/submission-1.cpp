class MinStack {

private: 
    stack<int> main_stack; 
    stack<int> min_stack; 
public:
    MinStack() {
        min_stack.push(INT_MAX);
    }
    
    void push(int val) {
        main_stack.push(val); 
        min_stack.push(min(val, min_stack.top()));
    }
    
    void pop() {
        main_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return main_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
