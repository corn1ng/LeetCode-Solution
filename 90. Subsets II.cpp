class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res;
        if(nums.size()==0) return res;
        sort(nums.begin(),nums.end());  // 必须先排序。
        int len =nums.size();
        vector<int> sub;
        DFS(0,nums,res,sub);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(), res.end()), res.end()); // 删除vector中的重复元素。unique将所有重复元素放到最后，并返回第一个位置的迭代器。
        return res;
    }
    void DFS(int index, vector<int>& nums,vector<vector<int> >& res, vector<int> sub)
    {
        if(index-1==nums.size()-1)
        {   res.push_back(sub);
            sub.clear();
            return;
        }
        sub.push_back(nums[index]);
        DFS(index+1,nums,res,sub);
        sub.pop_back();
        DFS(index+1,nums,res,sub);
    }
    
};
