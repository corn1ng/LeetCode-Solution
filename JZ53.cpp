class Solution {
public:
   int GetNumberOfK(vector<int> data ,int k) {
    int size = data.size();
    if(size<=0) return 0;
    int left = 0;
    int right = size-1;
    while(left <= right)
    {
        int mid =(right+left)>>1;
        if(data[mid]>k)
        {
            left = mid+1;
        }
        else if(data[mid]<k)
        {
            right = mid-1;
        }
        else  // 分别向左向右找。
        {
            int result = 0;
            int m = mid;
            while(data[mid]==k && mid>=left && mid<=right)
            {
                result++;
                mid--;
            }
            while(data[m]==k && m>=left && m<=right)
            {
                result++;
                m++;
            }
            return result-1;
        }
    }
    return 0;
}
};
// 求中点是(left+right)/2 是加不是减。。。