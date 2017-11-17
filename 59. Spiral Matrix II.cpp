class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        //vector<vector<int>> res;
        // for(int i=0;i<n;i++)
        // {
        //     vector<int> yige;
        //     for(int j=0;j<n;j++)
        //     {
        //         yige.push_back(0);
        //     }
        //     res.push_back(yige);
        // }
        vector<vector<int> > res( n, vector<int>(n) );
        
        int hangbegin=0;
        int hangend=n-1;
        int liebegin=0;
        int lieend =n-1;
        int number=1;
        while(hangbegin<=hangend&&liebegin<=lieend)
        {
            for(int i=liebegin;i<=lieend;i++)
            {
                res[hangbegin][i]=number++;
            }
            hangbegin++;
            for(int i=hangbegin;i<=hangend;i++)
            {
                res[i][lieend]=number++;
            }
            lieend--;
            if(hangbegin<=hangend)
            {
                for(int i=lieend;i>=liebegin;i--)
                {
                    res[hangend][i]=number++;
                }
            } 
            hangend--;
            if(liebegin<=lieend)
            {
                for(int i=hangend;i>=hangbegin;i--)
                {
                    res[i][liebegin]=number++;
                }
            }
            liebegin++;
        }
        return res;
    }
};
