class Solution {
public:
    int strStr(string da, string xiao) {
        int dasize = da.size();
        int xiaosize = xiao.size();
        if(xiaosize==0) return 0;
        for(int i=0;i<dasize;i++)
        {
            if(da[i]==xiao[0])
            {
                int daindex=i+1;
                int j;
                for(j=1;j<xiaosize;j++)
                {
                    if(xiao[j]!=da[daindex++]) break;
                }
                if(j==xiaosize) return i;
            }
        }
        return -1;
    }
};

//暴力解,先匹配第一个,第一个匹配到就继续匹配后面.
