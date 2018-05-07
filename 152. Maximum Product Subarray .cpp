class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len =nums.size();
        if(len==1) return nums[0];
        vector<int> dpmax(len,0);
        vector<int> dpmin(len,0);
        int res =nums[0];
        dpmax[0]=nums[0];
        dpmin[0]=nums[0];
        for(int i=1;i<len;i++)
        {
           dpmax[i] = max(max(dpmax[i-1]*nums[i],dpmin[i-1]*nums[i]),nums[i]);
           dpmin[i] = min(min(dpmax[i-1]*nums[i],dpmin[i-1]*nums[i]),nums[i]);
           res =max(res,dpmax[i]);
        }
        return res;
    }
};


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len =nums.size();
        if(len==1) return nums[0];
        int res =nums[0];
        int dpmax =nums[0];
        int dpmin =nums[0];
        int mmax;
        int mmin;
        for(int i=1;i<len;i++)
        {
           mmax = max(max(dpmax*nums[i],dpmin*nums[i]),nums[i]);
           mmin = min(min(dpmax*nums[i],dpmin*nums[i]),nums[i]);
            dpmax=mmax;
            dpmin=mmin;
           res = max(res,mmax);
        }
        return res;
    }
};
