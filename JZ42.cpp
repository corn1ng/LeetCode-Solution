class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int size =array.size();
        int dppre=array[0];
        int mmax=array[0];
        for(int i=1;i<size;i++)
        {
            dppre = max(array[i],dppre+array[i]);
            mmax = max(dppre,mmax);
        }
        return mmax;
    }
};