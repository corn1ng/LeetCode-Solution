class Solution {
public:
    int longestValidParentheses(string s) {
        int len =s.size();
        int last=-1;
        int res=0;
       	stack<int> st;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='(') st.push(i);
            else if(s[i]==')')
            {
                if(st.size()==0) 
                {
                    last = i;
                }
                else
                {
                    st.pop();
                    if(st.size()==0)
                    {
                        res =max(res,i-last);
                    }
                    else
                    {
                        res=max(res,i-st.top());
                    }
                }
            }
        }
        return res;
    }
};
