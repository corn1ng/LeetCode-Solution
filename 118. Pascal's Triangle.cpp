class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        if(numRows==0) return res;
        vector<int> lines;
        lines.push_back(1);
        res.push_back(lines);
        if(numRows==1) return res;
        for(int i=1;i<numRows;i++)
        {
            vector<int> lines;
            lines.push_back(1);
            for(int j=1;j<i;j++)
            {
                lines.push_back(res[i-1][j-1]+res[i-1][j]);
            }
            lines.push_back(1);
            res.push_back(lines);
        }
        return res;
    }
};
//打印杨辉三角
// 前两排的情况单独处理。
//大于两排时，每行先插入一个1，然后中间的数等于上一列两个数的相加，然后这一行再插入一个1。然后一行就输出完毕。
