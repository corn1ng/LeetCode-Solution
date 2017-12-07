class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len =nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> sub;
        DFS(nums,0,res,sub,len);
        return res;
    }
    void DFS(vector<int> nums,int start,vector<vector<int>>& res,vector<int> sub,int len)
    {
        if(start==len)
        {
            res.push_back(sub); 
            return;
        }
        sub.push_back(nums[start]);
        DFS(nums,start+1,res,sub,len);
        sub.pop_back();
        DFS(nums,start+1,res,sub,len);
    }
};
