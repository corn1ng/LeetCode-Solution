class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len =nums.size();
        int res,i;
        for(i=0;i<len;i++)
        {
            if(nums[i]==target)
            {
                res=i;
                break;
            }
        }
        if(i==len)
        {
            return -1;
        }
        else
        {
            return res;
        }
    }
};
