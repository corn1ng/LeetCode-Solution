class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<7) return index;
        vector<int> result(index+1);
        result[1]=1;
        int t2 =1,t3 =1,t5=1;
        for(int  i=2;i<=index;i++)
        {
            result[i]=min(result[t2]*2,min(result[t3]*3,result[t5]*5));
            if(result[i]==result[t2]*2) t2++;
            if(result[i]==result[t3]*3) t3++;
            if(result[i]==result[t5]*5) t5++;
        }
        return result[index];
    }
};
// 求丑数；
//利用空间换时间，不用每个数都计算是否为丑数了。
//第一个丑数是1 ，下一个丑数一定是上一个第一个丑数中1乘2 ，1乘3，1乘5中的最小者，同样，
//再下个丑数是2*2 ，1*3，1*5中的最小者
//再下个是2*2，2*3，1*5中的最小者。
//再下是3*2，2*3,1*5中的最小者，因为这里3*2 ，2*3重合了，所以前面<7时，直接返回。
//丑数算的时候都多了一个6,所以return result[index](上一个)；

//还有就是用三个指针，用了哪个哪个指针加1，然后继续比。