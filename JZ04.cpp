class Solution {
public:
    bool Find(int target, vector<vector<int> > array) 
    {
        int hang = array.size();
        int lie = array[0].size();
        int i=0,j=lie-1;
        while(i<hang && j>=0)
        {
            if(target<array[i][j])
            {
                j--;
            }
            else if(target>array[i][j])
            {
                i++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
//改变思维方式，从右上角进行遍历就好。