class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size() == 0) 
        {   int a =1;
            return a;
        }
        int length =nums.size();
        int res=0;
        for(int i=0;i<length;i++)
        {   //不加nums[i]<length 时会越界。
            while(nums[i]>0&&nums[i]<length&&nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
       for(int i=0;i<length;i++)
       {
           if(nums[i]!=i+1)
           {
               return i+1;
           }
       }
        return length+1;
    }
};
