class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return true;
        }
        int reach =0;
        int i;
        int len =nums.size();
        for(i=0;i<len&&reach>=i;i++)
        {
            reach =max(reach,i+nums[i]);    
        }
        return i==len;
    }
    };
