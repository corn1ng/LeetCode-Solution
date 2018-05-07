// 使用动态规划，先对边缘赋值，然后任意处的值等于左边的和加上左边值和上边的值加上上边和的较小值。
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int hang =grid.size();
        int lie = grid[0].size();
        vector<vector<int>> dp(hang, vector<int>(lie,0));
        int sum=0;
        for(int i=0;i<lie;i++)
        {
            dp[0][i]=grid[0][i]+sum;
            sum = dp[0][i];
        }
        sum=0;
        for(int i=0;i<hang;i++)
        {
            dp[i][0]=grid[i][0]+sum;
            sum = dp[i][0];
        }
        for(int i=1;i<hang;i++)
        {
            for(int j=1;j<lie;j++)
            {   // 这里容易出错,dp中存储的是到这个位置的最小值。
                dp[i][j]=min(grid[i][j]+dp[i-1][j],grid[i][j]+dp[i][j-1]);
            }
        }
        return dp[hang-1][lie-1];
    }
};
