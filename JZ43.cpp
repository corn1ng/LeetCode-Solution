class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int result=0;
        int a=0;
        int b=0;
        for(int i=1;i<=n;i=i*10)
        {
            a =n/i;
            b =n%i;
            result = result + (a+8)/10*i + (a % 10==1)*(b+1);
        }
        return result;
    }
};