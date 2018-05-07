class Solution {
public:
    string des(string s)
    {
        string res = "";
        int index=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1]&&i+1<s.size())
            {
                index++;
            }
            else
            {
                res =res+to_string(index)+s[i];
                index=1;
            }
        }
        return res;
    }
    
    string countAndSay(int n) {
        string s = "1";
        for(int i=0;i<n-1;i++)
        {
            s =des(s);
        }
        return s;
    }
};
//很绕的一道题,大致意思是
1                 第一次输入1
11               上次输出的读出来是1 个1 所以这次输出11
21               上次输出读出来是2个1 所以这次输出21
1211             上次输出读出来是1个2 1个1 所以这次读出来1211
111221           依次类推.
312211
13112221
1113213211
31131211131221
13211311123113112211
11131221133112132113212221
3113112221232112111312211312113211
1321132132111213122112311311222113111221131221
11131221131211131231121113112221121321132132211331222113112211
311311222113111231131112132112311321322112111312211312111322212311322113212221



string countAndSay(int n) {
    if (n == 0) return "";
    string res = "1";
    while (--n) {
        string cur = "";
        for (int i = 0; i < res.size(); i++) {
            int count = 1;
             while ((i + 1 < res.size()) && (res[i] == res[i + 1])){
                count++;    
                i++;
            }
            cur += to_string(count) + res[i];
        }
        res = cur;
    }
    return res;
}
