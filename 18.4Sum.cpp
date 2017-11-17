class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int len = nums.size();
        int n =nums.size();
        vector<vector<int>> res;
        // if(len<4)  return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-3;i++)
        {
            // if(i>0&&nums[i]==nums[i-1]) continue;
            // if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            // if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target) continue;
            for(int j=i+1;j<len-2;j++)
            {
                // if(j>i+1&&nums[j]==nums[j-1]) continue;
                // if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                // if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target) continue;
                int left = j+1;
                int right =len-1;
                while(left<right)
                {
                    int sum=target-(nums[i]+nums[j]);
                    if(sum>(nums[left]+nums[right]))
                    {
                        left++;
                    }
                    else if(sum<(nums[left]+nums[right]))
                    {
                        right--;
                    }
                    else
                    {
                        vector<int> a;
                        int front=nums[left];
                        a.push_back(nums[left]);
                        int end=nums[right];
                        a.push_back(nums[right]);
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        res.push_back(a);
                        while(nums[left]==front&&left<right)
                        {
                            left++;
                        }
                        while(nums[right]==end&&left<right)
                        {
                            right--;
                        }
                    }
                }
                while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        return res;
    }
};
