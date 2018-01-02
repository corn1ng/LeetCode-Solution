class Solution {
public:
    void reverseWords(string &s) 
    {
        if(s.size() ==0) return;  
        int left = 0, right = 0, i =0;  
        while(i < s.size())  
        {  
            while(i < s.size() && s[i] == ' ') i++;  
            if(i >= s.size()) break;  
            if(left != right) 
            {
                s[right++] = ' ';
            }
            left = right;  
            while(i< s.size() && s[i] != ' ') 
            {
                s[right++] = s[i++];
            }
            reverse(s.begin()+left, s.begin()+right);  
        }  
        s.resize(right);  
        reverse(s.begin(), s.end());  
    }  
    
};
