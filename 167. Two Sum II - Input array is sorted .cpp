class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        int left=0;
        int right= len-1;
        vector<int> res;
        while(left<right)
        {
            if(nums[left]+nums[right]>target)
            {
                right--;
            }
            else if(nums[left]+nums[right]<target)
            {
                left++;
            }
            else
            {
                res.push_back(left+1);
                res.push_back(right+1);
                break;
            }
        }
        return res;
    }
};
