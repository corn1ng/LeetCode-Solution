class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;
        int l1 =nums1.size();
        int l2 =nums2.size();
        vector<int>::iterator it1 =nums1.begin();
        vector<int>::iterator it2 =nums2.begin();
        int i1=0,i2=0;
        while(i1<l1&&i2<l2)
        {
            if(*it1>*it2)
            {
                c.push_back(*it2);
                i2++;
                it2++;
            }
            else
            {
                c.push_back(*it1);
                i1++;
                it1++;
            }
        }
        if(i1<l1)
        {
            while(i1<l1)
            {
                c.push_back(*it1);
                i1++;
                it1++;
            }
        }
        if(i2<l2)
        {
            while(i2<l2)
            {
                c.push_back(*it2);
                i2++;
                it2++;
            }
        }
        int size3 =c.size();
        if(size3%2==0)
        {
            return (c[size3/2]+c[size3/2-1])/2.0;
        }
        else
        {
            return c[(size3-1)/2];
        }
    }
};
