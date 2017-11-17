class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
        {
            return false;
        }
        int hang =matrix.size();
        int lie =matrix[0].size();
        int i=0,j=0;
	//设置两个指针进行搜索，如果当前值小于target，继续搜索，当前值大于target，直接输出false，当前值小于target，继续移动指针。等于就输出true。
        while(i<hang&&j<lie)
        {
            if(matrix[i][j]<target)
            {
                j++;
                if(j==lie)
                {
                    j=0;
                    i++;
                }
            }
            else if(matrix[i][j]>target)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
