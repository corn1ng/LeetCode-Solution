// 主要要防止int 溢出的情况,所以 res ,p 都设为long  long 来防止溢出.
class Solution {
public:
    int reverse(int x) {
        vector<int>  a;
        if(x==0 ) return 0;
        int flag =1;
        if(x<0) 
        {
            x =-x;
            flag =0;
        }
        while(x!=0)
        {
            int number = x%10;
            a.push_back(number);
            x =x/10;
        }
        long long res=0;
        long long p=1;
        for(int i=a.size()-1;i>=0;i--)
        {   
            res =res+a[i]*p;
            p=p*10;
        }
        if(flag==0)
        {
            res=-res;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};
