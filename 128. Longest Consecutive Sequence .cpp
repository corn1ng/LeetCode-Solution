//解法1 先排序
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int len =nums.size();
        sort(nums.begin(),nums.end());
        int res=1;
        int maxres=1;
        for(int i=1;i<len;i++)
        {
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1)
            {
                res++;
            }
            else
            {
                maxres =max(maxres,res);
                res=1;
            }
        }
	//下面的max是为了处理假如最后的几个数是连续的比如（3,5,7,8,9最后三个数是连续的），那么就不会进入else中max处理了。所以在最后处理一下。
        maxres =max(maxres,res);
        return maxres;
    }
};
