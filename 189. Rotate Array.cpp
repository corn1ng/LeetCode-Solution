class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len =nums.size();
        for(int i=0;i<k;i++)
        {
            rotate1(nums);
        }
        return;
    }
    
    void rotate1(vector<int>& nums)
    {
        int len =nums.size();
        int temp = nums[len-1];
        for(int i=len-1;i>0;i--)
        {
            nums[i]=nums[i-1];
        }
        nums[0]=temp;
    }
};

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len =nums.size();
        k = k%len;
        reverse(nums,0,len-1);
        reverse(nums,0,k-1);
        reverse(nums,k,len-1);
        return;
    }
    void reverse(vector<int>& nums,int left, int right)
    {
        int len = nums.size();
        while(left<right)
        {
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    
};
