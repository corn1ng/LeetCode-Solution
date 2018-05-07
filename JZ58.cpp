class Solution {
public:
    string reverse(string& str,int start,int end)
    {
        while(start<=end)
        {
            swap(str[start],str[end]);
            start++;
            end--;
        }
        
        return str;
    }
    string LeftRotateString(string str, int n) {
        if(n<=0) return str;
        if(str.size()<=0) return str;
        if(n>str.size())
        {
            n=n%str.size();
        }
       
        reverse(str,0,n-1);
        reverse(str,n,str.size()-1);
        reverse(str,0,str.size()-1);
        return str;
    }
};
/********************************/
//另一种看到的简便方法
链接：https://www.nowcoder.com/questionTerminal/12d959b108cb42b1ab72cef4d36af5ec
来源：牛客网

class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len = str.length();
        if(len == 0) return "";
        n = n % len;
        str += str;
        return str.substr(n, len);
    }
};