class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len =nums.size();
        //1
        int i=0;
        for(i=len-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                break;
            }
        }
        if(i==0)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int number =nums[i-1];
        int small =i;
        // 2
        int j=0;
        for(j=len-1;j>=small;j--)
        {
            if(nums[j]>number)
            {
                break;
            }
        }
        swap(nums[i-1],nums[j]);
        sort(nums.begin()+i,nums.end());
        return;
    }
};
