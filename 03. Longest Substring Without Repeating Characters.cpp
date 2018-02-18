class Solution {
public:
 int lengthOfLongestSubstring(string s) {
        int len  =s.size();
        if(len==1) return 1;
        int res =1;
        int maxres =0;
        int left =0;
        int right=1;
        unordered_set<int> charset;
        charset.insert(s[left]);
        while(right<len)
        {
            if(charset.count(s[right])!= 0)
            {
                charset.erase(s[left]);   
                left++;
            }
            else
            {  
                charset.insert(s[right]);
                right++;
                res = right -left;
                maxres =max(maxres,res);
            }
        }
        return maxres;
    }
};
