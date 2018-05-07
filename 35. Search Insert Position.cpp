class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len =nums.size();
        if(len==1&&target>nums[0])
        {
            return 1;
        }
        int res;
        for(int i=0;i<len;i++)
        {
            if(nums[i]>=target)
            {
                res =i;
                break;
            }
        }
        return res;
    }
};
