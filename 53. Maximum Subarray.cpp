class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length =nums.size();
       
        int sum =0;
        int res = INT_MIN; // 表示最小值
        for(int i=0;i<length;i++)
        {
            if(sum<0)
            {
                sum =0;
            }
            sum =sum+nums[i];
          
            res =max(res,sum);
        }
        return res;
    }
};
