class Solution {
public:
    bool isPalindrome(int x) {
        int res = 0, k = x;
        
        if(x<0) x=-x;
        while(x!=0)
        {
            res = res*10 + x%10;
            x = x/10;
        }
        if(k==res)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
};
