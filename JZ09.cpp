class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.size()<=0)
        {
            while(stack1.size()>0)
            {
                stack2.push(stack1.top());
                stack1.pop();
            }
            int a =stack2.top();
            stack2.pop();
            return a;
        }
        else
        {
            int a =stack2.top();
            stack2.pop();
            return a;
        }
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};