class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int size =array.size();
        int left =0;
        int right =size-1;
        vector<int> res;
        int chengji=INT_MAX;
        while(left<=right)
        {
            if(left<=right && array[left]+array[right]==sum)
            {
                chengji =min(chengji,array[left]*array[right]);
                if(chengji==array[left]*array[right])
                {
                    res.clear();
                    res.push_back(array[left]);
                    res.push_back(array[right]);
                }
                left++;
                right--;
            }
            else if(array[left]+array[right]<sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return res;
    }
};