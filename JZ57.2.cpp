class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > res;
        vector<int> mid;
        int left =1;
        int right =2;
        mid.push_back(1);
        mid.push_back(2);
        int nowsum =3;
        while( left <= (sum+1)/2 && right <= (sum+1)/2&&left<right)
        {
            if(sum>nowsum)
            {
                right++;
                mid.push_back(right);
                nowsum =nowsum+right;
            }
            else if(sum==nowsum)
            {
                res.push_back(mid);
                nowsum =nowsum-*mid.begin();
                mid.erase(mid.begin());
                left++;
            }
            else
            {
                nowsum =nowsum-*mid.begin();
                mid.erase(mid.begin());
                left++;
            }
        }
        return res;
    }
};