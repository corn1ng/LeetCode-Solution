class Solution {
public:
    vector<vector<int>>res;
    vector<int> ans;
    int nums_len;

    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        if(candidates.empty()) return res;
        nums_len = candidates.size();
        dfs(0, 0, target, candidates);
        return res;
    }

    void dfs(int start, int sum, int target,vector<int> candidates)
    {
         if(sum==target)
         {
             res.push_back(ans);
             return;
         }
        else if(sum>target)
        {
            return;
        }
        else
        {
            // 因为每个岔路口不止一种情况，而是candidates.size()情况，所以用 循环把每种情况都进行遍历。
            for(int i=start;i<nums_len;i++)
            {
                ans.push_back(candidates[i]);
                dfs(i,sum+candidates[i],target,candidates);
                ans.pop_back();
            }
        }
    }
};
