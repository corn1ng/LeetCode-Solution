class Solution {
public:
    int findMin(vector<int>& nums) {
        int len =nums.size();
        int min =INT_MAX;
        for(int i=0;i<len;i++)
        {
            if(nums[i]<min) min =nums[i];
        }
        return min;
    }
};
