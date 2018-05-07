class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        int size =numbers.size();
        if(size!=5) return false;
        sort(numbers.begin(),numbers.end());
        int zeronumber =0;
        int i=0;
        while(numbers[i]==0)
        {
            zeronumber++;
            i++;
        }
        int res =0;
        int k =i;
        for(;i<4;i++)
        {
            if(numbers[i]-numbers[i+1]==0) return false;
            res =res+(numbers[i]-numbers[i+1]);
        }
        if(res<0) res=-res;
        if(res-(5-k-1)>zeronumber) return false;
        return true;
    }
};