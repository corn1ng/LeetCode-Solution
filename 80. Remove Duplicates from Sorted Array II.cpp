class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()==0) return 0;
        int len =nums.size();
        int res=1;
        int flag=0;
        for(int i=1;i<len;i++)
        {
            if(nums[i]==nums[i-1])
            {   flag++;
                if(flag<=1) {
                    res++;
                }
            }
            else
            {
                res++;
                flag=0;
            }
        }
        return res;
    }
};