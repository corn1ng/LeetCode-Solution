class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;
        int len =nums.size();
        if(!len) 
        {
            a.push_back(-1);
            a.push_back(-1);
            return a;
        }
        int left =0;
        int right =len-1;
        while(left<right)
        {
            int mid =(right+left)/2;
            if(nums[mid]>=target)
            {
                right=mid;
            }
            else
            {
                left =mid+1;
            }
        }
        if(nums[left]!=target)
        {
            a.push_back(-1);
            a.push_back(-1);
            return a;
        }
        else 
        {
            a.push_back(left);
        }
        int left1 =0;
        int right1 =len-1;
        while(left1<right1)
        {
            int mid =(right1+left1)/2+1;
            if(nums[mid]>target)
            {
                right1=mid-1;
            }
            else
            {
                left1 =mid;
            }
        }
        if(nums[left1]!=target)
        {
            a.push_back(-1);
            a.push_back(-1);
            return a;
        }
        else 
        {
            a.push_back(right1);
        }
     return a;
    }
};
