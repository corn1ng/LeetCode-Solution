class Solution {
public:
    int lengthOfLastWord(string s) {
        int len =s.size();
        if(len==0) return 0;
        int index=len-1;
        while(s[index]==' '&&index>=0) index--; 
        if(index<0) return 0;
        for(int i=index;i>=0;i--)
        {
            if(s[i]==' ') return index-i;
        }
        return index+1;
    }
};
