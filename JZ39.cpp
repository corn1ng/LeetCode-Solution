class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int cishu = 1;
        int shu = numbers[0];
        for(int i=1;i<numbers.size();i++)
        {
            if(shu==numbers[i])
            {
                cishu++;
                continue;
            }
            else
            {
                cishu--;
                if(cishu==0)
                {
                    shu =numbers[i];
                    cishu=1;
                }
            }
        }
       int n=0;
       for(int i=0;i<numbers.size();i++)
       {
           if(shu==numbers[i]) n++;
       }
       if(n*2>numbers.size()) return shu;
       return 0;
       
    }
};
// 数组中超过一半的数字
//统计每个数字。先把第一个数字设为最开始数字，个数设为1，如果后面的数字等于这个数字，就加1，
//不等就减1，当减到0，就把新数字设为当前数字，并且个数加1。
//意思就是大于一半的数字，可以抵消其他所有数字，还有盈余。