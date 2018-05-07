class Solution {
public:
    string convert(string s, int numRows) {
        string res = "";
        if (numRows == 1||s.size()<=numRows)
            return s;
        int len =s.size();
        int row =0;
        int groupnumber = 2*numRows-2;
        for(int row=0;row<numRows;row++)
        {
            if(row==0)
            {
                for(int i = 0;i<len;i=i+groupnumber)
                {
                    res = res+s[i];
                }
            }
            else if(row==numRows-1)
            {
                for(int i=numRows-1;i<len;i=i+groupnumber)
                {
                    res =res+s[i];
                }
            }
            else
            {
                for(int i=0;i<len;i=i+groupnumber)
                {   
                    if(i+row<len) res = res+s[i+row];
                    if(i+groupnumber-row<len) res = res+s[i+groupnumber-row];
                   
                }
                    
            }
            
        }
        return res;
    }
};
