class Solution {
public:
    bool isPalindrome(string s) {
        string ss = "";
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                ss += s[i];
            }
            else if(s[i]>='A'&&s[i]<='Z')
            {
                ss+=(s[i]-'A'+'a');
            }
            else if(s[i]>='0'&&s[i]<='9')
            {
                ss+=s[i];
            }
        }
        for(int i=0;i<ss.size();i++)
        {
            if(ss[i]!=ss[ss.size()-i-1])
                return false;
        }
        return true;
    }
};
