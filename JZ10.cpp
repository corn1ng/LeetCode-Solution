class Solution {
public:
    int Fibonacci(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int result0 = 0;
        int result1 = 1;
        int result=0;
        for(int i=2;i<=n;i++)
        {
            result=result0+result1;
            result0=result1;
            result1=result;
        }
        return result;
    }
};
//动态规划写法