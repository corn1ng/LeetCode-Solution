class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        //返回不重复的个数 
        // int len=nums.size();
        // if(!len) return 0;
        // int res =0;
        // // 设置一个位置 k 若下一个数和k 一样，则 i++； 若不一样，设为新的k;并且result个数加1.
        // int k=nums[0];
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i+1]!=k)
        //     {
        //         k=nums[i+1];
        //         res++;
        //     }
        //     else
        // }
        // return res;
        int len =nums.size();
        if(!len) return 0;
        int res=1;
        for(int i=1;i<len;i++)
        {
            if(nums[res-1]!=nums[i])
            {
                nums[res++]=nums[i];
            }
        }
        return res;
    }
};
