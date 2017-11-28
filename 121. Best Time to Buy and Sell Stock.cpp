class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len =prices.size();
        int res=0;
        int minindex=0;
        for(int i=1;i<len;i++)
        {
            if(prices[i]>prices[minindex])
            {
                res =max(res,prices[i]-prices[minindex]);
            }
            else
            {
                minindex=i;
            }
        }
        return res;
    }
};

//此题就是选择买入卖出股票的最大收益，对于第i天卖出的最大收益即为第i天的股市价格减去[0,i-1]天内的最小股市价格，当第i天的股市价格比漆面最低股市价格还低，则更新最低股市价格。然后取最大的股市收益，为DP问题。用profit[i]表示第i天的收益，则minBuyPrice = min(minBuyPrice, prices[i]),并且profit[i] = prices[i]-minBuyPrice. 然后取profit中的最大值。
