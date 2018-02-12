class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str.size()==0) return -1;
        int size =str.size();
        int *al =new int[256];
        for(int i=0;i<256;i++)
        {
            al[i]=0;
        }
        for(int i=0;i<size;i++)
        {
            al[str[i]]++;
        }
        for(int i=0;i<str.size();i++)
        {
            if(al[str[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};
//贼奇怪的一道题。。