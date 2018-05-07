class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int len= nums.size();
        for(int i=0;i<len;i++)
        {
            int left =i+1;
            int right =len-1;
            int result= -nums[i];
            while(left<right)
            {
                if(nums[left]+nums[right]>result)
                {
                    right--;
                }
                else if (nums[left]+nums[right]<result)
                {
                    left++;
                }
                else
                {
                    vector<int> a;
                    int front =nums[left];
                    int end =nums[right];
                    a.push_back(nums[i]);
                    a.push_back(nums[left]);
                    a.push_back(nums[right]);
                    res.push_back(a);
                    while(left<right&&front==nums[left]) left++;
                    while(left<right&&end==nums[right]) right--;
                }
            }
             while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }return res;
    }
    
};
