class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.size()==0)
        {
            return res;
        }
        int hang = matrix.size();
        int lie =matrix[0].size();
        int hangbegin=0,hangend=hang-1,liebegin=0,lieend=lie-1;
        while(hangbegin<=hangend && liebegin<=lieend)
        {
            for(int i=liebegin;i<=lieend;i++)
            {
                res.push_back(matrix[hangbegin][i]);
            }
            hangbegin++;
            for(int i=hangbegin;i<=hangend;i++)
            {
                res.push_back(matrix[i][lieend]);
            }
            lieend--;
            if (hangbegin <= hangend) 
            {
                 for(int i=lieend;i>=liebegin;i--)
                {
                    res.push_back(matrix[hangend][i]);
                }
            }
           
            hangend--; 
            if(liebegin<=lieend)
            {
                for(int i=hangend;i>=hangbegin;i--)
                {
                    res.push_back(matrix[i][liebegin]);
                }
            }
            
            liebegin++;
        }
        return res;
    }
};
