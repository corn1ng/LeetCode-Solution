class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int strsnumber =strs.size();
        string res = "";
        if(strsnumber==0) return res;
        int minlen=INT_MAX;
        int j=0;
        for(int i=0;i<strsnumber;i++)
        {
            if(strs[i].size()<minlen) minlen =strs[i].size();
        }
        for(int i=0;i<minlen;i++)
        {
            char r =strs[0][i];
            for(j=1;j<strsnumber;j++)
            {
                if(strs[j][i]!=r) 
                {
                    return res;
                }
            }
            res =res+r;    
        }
        return res;
    }
};
