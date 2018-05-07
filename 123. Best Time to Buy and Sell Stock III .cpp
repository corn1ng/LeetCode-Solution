class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if(len==0) return 0;
        //vector<int> dpzheng(len,0);
        //dpfan 以 i 为开始的最大的。
        //vector<int> dpfan(len,0);
        vector<int> zheng(len,0);
        vector<int> fan(len,0);
        int reszheng=0,resfan=0;
        int minindex=0;
        int zhengmax=0,fanmax=0;
        for(int i=1;i<len;i++)
        {
            if(prices[i]>=prices[minindex])
            {
                reszheng=(prices[i]-prices[minindex]);
                zhengmax =max(zhengmax,reszheng);
                zheng[i]=zhengmax;
            }
            else
            {
                minindex = i;
                reszheng=0;
                zhengmax =max(zhengmax,reszheng);
                zheng[i]=zhengmax;
            }
        }
        int maxindex=len-1;
        for(int i=len-2;i>=0;i--)
        {
            if(prices[i]<=prices[maxindex])
            {
                //dpfan[i]=prices[maxindex]-prices[i];
                resfan=(prices[maxindex]-prices[i]);
                fanmax =max(fanmax,resfan);
                fan[i]=fanmax;
            }
            else
            {
                maxindex=i;
                resfan=0;
                fanmax =max(fanmax,resfan);
                fan[i]=fanmax;
            }
        }
        int res=0;
        for(int i=0;i<len;i++)
        {
            res=max(res,zheng[i]+fan[i]);
        }
        return res;
    }
};
