class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(n<1||m<1) return  -1;
        list<int> result;
        for(int i=0;i<n;i++)
        {
            result.push_back(i);
        }
        list<int>::iterator t =result.begin();
        while(result.size()>1)
        {
            for(int i=1;i<m;i++)
            {
                t++;
                if(t==result.end())
                {
                    t =result.begin();
                }
            }
            list<int>::iterator next = ++t;
            if(next==result.end())
            {
                next =result.begin();
            }
            --t;
            result.erase(t);
            t =next;
        }
        return *(t);
    }
};
// 不能用1vector ,要用list
// 或者可以用queue.