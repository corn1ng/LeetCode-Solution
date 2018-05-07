class Solution {
public:
    int trap(vector<int>& height) {
        int length =height.size();
        int left =0;
        int right =length-1;
        int leftmax=0;
        int rightmax=0;
        int res =0;
        while(left<right)
        {
            leftmax =max(height[left],leftmax);
            rightmax =max(height[right],rightmax);
            if(leftmax<rightmax)
            {
                res =res+leftmax-height[left];
                left++;
            }
            else
            {
                res =res+rightmax-height[right];
                right--;
            }
        }
        return res;
    }
};
