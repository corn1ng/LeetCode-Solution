class Solution {
public:
    vector<int> getRow(int rowIndex) {  
        vector<int> res;  
        vector<int> tmp;  
        res.push_back(1);  
        if(rowIndex<=0) return res;
        for(int i=1;i<=rowIndex;i++)
        {
            tmp = res;
            res.clear();
            res.push_back(1);
            for(int j=1;j<i;j++)
            {
                res.push_back(tmp[j-1]+tmp[j]);
            }
            res.push_back(1);
        }
        return res;
    }  
};
