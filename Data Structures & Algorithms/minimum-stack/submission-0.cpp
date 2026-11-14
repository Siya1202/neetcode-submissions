class MinStack {
    stack<int> data;
    stack<int> minstack;
public:
    MinStack() {

    }
    
    void push(int val) {
        data.push(val);
        if(minstack.empty() || val<=minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
        int datatop=data.top();
        data.pop();
        if(datatop==minstack.top()){
            minstack.pop();
        }
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};
