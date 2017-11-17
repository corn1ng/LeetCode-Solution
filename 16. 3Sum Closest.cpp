class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len = nums.size();
        int clo=1000;
        sort(nums.begin(),nums.end());
        int sum;
        int zuihou;
        for(int i=0;i<len;i++)
        {
            int left =i+1;
            int right =len-1;   
            while(left<right)
            {
                sum =nums[i]+nums[left]+nums[right];
                if(abs(sum-target)<clo)
                {
                    clo =abs(sum-target);
                    zuihou=sum;
                }
                if(sum<target)
                {
                    left++;
                }
                else if(sum>=target)
                {
                    right--;
                }
            }
        }
       return zuihou;
    }
};
