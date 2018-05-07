// ------------------滑动窗口two points ----------
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


//-------------动态规划法--------------------
int longestSubstringWithoutDuplication(string str)
{
    int curlength = 0;
    int maxlength = 0;
    int* position =new int[26]; // 存每个数字上次出现的位置。
    for(int i=0;i<26;i++)
    {
        position[i]=-1;
    }
    for(int i=0;i<str.size();i++)
    {
        int preIndex =position[str[i]-'a']; //找到当前字母上次出现的地方。
        if(preIndex<0||i-preIndex>curlength)//如果没有出现过或者距离上次出现的位置比现在最长的距离长
            //（说明当前最长的没有包括上一个出现的i字符）
        {
            curlength++;
        }
        else
        {
            maxlength =max(maxlength,curlength);
            curlength =i-preIndex;
        }
        position[str[i]-'a'] =i; //记录本次出现的位置。
    }
    maxlength =max(maxlength,curlength);
    return maxlength;
}

