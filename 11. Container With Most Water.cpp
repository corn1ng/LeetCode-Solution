class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right=height.size()-1;
        int S = (right-left)*min(height[left],height[right]);
        int max =0;
        while(left<right)
        {
            if(height[left]>height[right])
            {
                right--;
                int S1 = (right-left)*min(height[left],height[right]);
                if(S1>S)
                {
                    S=S1;  
                }
            }
             if(height[left]<=height[right])
            {
                left++;
                int S2 = (right-left)*min(height[right],height[left]);
                if(S2>S)
                {
                    S=S2;  
                }
            }
        }
        return S;
    }
};
