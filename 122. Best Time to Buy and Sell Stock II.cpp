class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len =prices.size();
        int res=0;
        for(int i=0;i<len-1;i++)
        {
            if(prices[i+1]-prices[i]>0)
            {
                res = res + prices[i+1]-prices[i];
            }
        }
        return res;
    }
};
// 这道题和121题的区别在于不限制次数，所以
//这道题就不是121的动态规划了，这道题使用贪心算法。。遍历数组，当一个数大于前面那个数的时候，就做一次买入卖出的操作。
// 小于的话就直接跳过。
