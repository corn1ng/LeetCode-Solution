class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> st;
        int j=0;
        for(int i = 0;i < pushV.size();)
        {
            st.push(pushV[i++]);
            while(j < popV.size() && st.top() == popV[j])
            {
                st.pop();
                j++;
            }      
        }
        if(st.size()==0) return true;
        else return false;
    }
};