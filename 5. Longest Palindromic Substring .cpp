class Solution {
public:
    int extend(string s,int j,int k)
    {
        while(s[j]==s[k]&&j>=0&&k<s.size())
        {
            j--;
            k++;
        }
        return k-j-1;
    }
    string longestPalindrome(string s)
    {
        int len = s.size();
        int start = 0;
        int end = 0;    
        int leng =0;
        int maxlen =0;
        for(int i=0;i<len;i++)
        {
            int len1 = extend(s,i,i);
            int len2 = extend(s,i,i+1);
            int leng = max(len1,len2);
            if(leng>maxlen)
            {
                maxlen =leng;
                start = i-(maxlen-1)/2;
                end = start+leng-1;
            }
        }
        return s.substr(start,maxlen);
    }
    
};
