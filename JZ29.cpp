class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int hang = matrix.size();
        int lie = matrix[0].size();
        int hangbegin=0;
        int liebegin=0;
        int hangend = hang-1;
        int lieend = lie-1;
        vector<int> result;
        while(hangbegin<=hangend&&liebegin<=lieend)
        {
            for(int i=liebegin;i<=lieend;i++)
            {
                result.push_back(matrix[hangbegin][i]);
            }
            hangbegin++;
            for(int i=hangbegin;i<=hangend;i++)
            {
                result.push_back(matrix[i][lieend]);
            }
            lieend--;
            // 一定要注意下面的两个if判断，太重要了。！！！！！！！！
            if(hangbegin<=hangend)
            {
                for(int i=lieend;i>=liebegin;i--)
            	{
                	result.push_back(matrix[hangend][i]);
            	}
            }
            hangend--;
            if(liebegin<=lieend)
            {
                for(int i=hangend;i>=hangbegin;i--)
            	{
                	result.push_back(matrix[i][liebegin]);
            	}
            }
            liebegin++;
        }
        return result;
    }
};