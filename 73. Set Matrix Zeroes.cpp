class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int hang =matrix.size();
        int lie =matrix[0].size();
        vector<int> hangvec;
        vector<int> lievec;
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<lie;j++)
            {
                if(matrix[i][j]==0)
                {
		    //不能直接赋值，因为在这里直接赋值的话，后面还没有遍历到的值就被修改了。
                    hangvec.push_back(i);
                    lievec.push_back(j);
                }
            }
        }
        int hangsize =hangvec.size();
        int liesize =lievec.size();
        for(int i=0;i<hangsize;i++)
        {
            for(int j=0;j<lie;j++)
            {
                matrix[hangvec[i]][j]=0;
            }
        }
         for(int i=0;i<liesize;i++)
        {
            for(int j=0;j<hang;j++)
            {
                matrix[j][lievec[i]]=0;
            }
        }
    }
};
