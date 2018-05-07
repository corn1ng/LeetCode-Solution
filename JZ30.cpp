class Solution {
private:
    stack<int> st;
    stack<int> smin;
public:
    
    void push(int value) {
        st.push(value);
        if(smin.empty())
            smin.push(value);
        if(smin.top()>value)
            smin.push(value);
        else
            smin.push(smin.top());
    }
    void pop() {
        smin.pop();
        st.pop();
    }
    int top() {
        return st.top();
    }
    int min() {
        return smin.top();
    }
};