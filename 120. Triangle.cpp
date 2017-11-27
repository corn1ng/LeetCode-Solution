class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int results;
        vector<int> res(triangle.size(),0);
        int hang =triangle.size();
        for(int i=hang-1;i>=0;i--)
        {
            for(int j=0;j<=triangle[i].size()-1;j++)
            {
                 res[j] = min(res[j],res[j+1])+ triangle[i][j];
            }
        }
        return res[0];
    }
};
