class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int hang=grid.size();
        int lie=grid[0].size();
        vector<vector<int>> dp(hang, vector<int>(lie,0));
        int flag=1;
        int k;
        for(k=0;k<hang;k++)
        {
            if(grid[k][0]!=1)
            {
                dp[k][0]=1;
            }
            else
            {
                break;
            }
        }
        for(;k<hang;k++)
        {
            dp[k][0]=0;
        }
        for(k=0;k<lie;k++)
        {
            if(grid[0][k]!=1)
            {
                dp[0][k]=1;
            }
            else
            {
                break;
            }
        }
         for(;k<lie;k++)
        {
            dp[0][k]=0;
        }
        for(int i=1;i<hang;i++)
        {
            for(int j=1;j<lie;j++)
            {
                if(grid[i][j]!=1) // 去掉障碍物。
                {
                     dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[hang-1][lie-1];
    }
};
