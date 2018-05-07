class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int len =digits.size();
        vector<string> res;
        if(len==0) return res;
        res.push_back("");
        string s[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(int i=0; i<len; i++)
        {
            vector<string> temps;
            string chars = s[digits[i]-'0'];
            for(int c=0;c<chars.size();c++)
            {
                for(int j=0;j<res.size();j++)
                    temps.push_back(res[j]+chars[c]);
            }
            res =temps;
        }
        return res;
    }
};


class Solution {
public:
    vector<string> res;
    vector<string> letterCombinations(string digits) {
        int len =digits.size();
        if(len==0) return res;
        // res.push_back("");
        string ss = "";
        string s[10] ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        DFS(0,digits,ss, s);
        return res;
    }
    void DFS(int index, string digits, string ss ,string s[10])
    {
        if(index==digits.size())
        {
            res.push_back(ss);
        }
        else
        {
            for(int i = 0; i < s[digits[index] - '0'].size(); i++)
           {
                DFS(index + 1, digits, ss+s[digits[index] - '0'][i], s);
           }
        }      
    }
};
