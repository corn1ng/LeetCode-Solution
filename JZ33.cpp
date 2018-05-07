class Solution {
public:
    bool VerifySquenceOfBST(vector<int>& sequence)
    {
        if(sequence.size()<=0) return false;
        return Verify(sequence,0,sequence.size());
    }
    
    
    bool Verify(vector<int> sequence,int left,int right) {
        int size = right-left;
        if(size <= 0) return true;
        int root = (sequence[right]);
        int i=0;
        for(; i<size ; i++)
        {
            if(sequence[i]>root) break;
        }
        for(int j=i;j<size;j++)
        {
            if(sequence[j]<root) return false;
        }
        return Verify(sequence,left,i-1) && Verify(sequence,i,right-1);
    }
};
//这道题我用vector指针做时，总是奇怪的爆内存。先留个坑，用左右指针先做好。
//上面的解法中，left指向第一个结点，right 指向最后一个结点。