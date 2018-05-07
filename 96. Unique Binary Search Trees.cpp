class Solution {
public:
    //满足卡特蓝数的定义
    int numTrees(int n) {
        int res[n+1];
        res[0]=1;
        res[1]=1;
        if(n==1) return 1;
        //h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)*h(0) (n>=2)
        for (int i=2; i<=n; i++) 
        {
            res[i] = 0;
            for (int j=0; j<i; j++) 
            {
                res[i] += res[j] * res[i-j-1];
            }
        }
        return res[n];
    }
};
