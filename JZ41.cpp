class Solution {
public:
    priority_queue<int,vector<int>,less<int> > p;
    priority_queue<int,vector<int>,greater<int> >q;
    void Insert(int num)
    {
        if(p.empty()||num<=p.top()) 
            p.push(num);
        else q.push(num);
        if(p.size()+1==q.size())
        {
            p.push(q.top());
            q.pop();
        }
        if(q.size()+2==p.size())
        {
            q.push(p.top());
            p.pop();
        }
    }

    double GetMedian()
    { 
        return p.size() == q.size() ? (p.top() + q.top()) / 2.0 : p.top();
    }

};
//使用两个优先级队列，（其实是使用堆），p为大顶堆，q为小顶堆。
// 从数据流中出来的元素，首先大顶堆空就加入大顶堆，元素比大顶堆堆顶小也加入大顶堆。
// 其余情况则加入小顶堆。
//加入完后，需要根据需要调整大顶堆和小顶堆两个堆中元素的个数。
//因为GetMdeian函数中是总个数奇数时选择大顶堆堆顶，所以当p.size()+1==q.size()时，已经不平衡了，需要调整平衡。
//同样，当总个数是偶数且大顶堆比小顶堆多两个时，也已经不平衡了，所以也需要进行调整就即可。