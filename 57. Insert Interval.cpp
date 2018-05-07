/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    static bool cmp(Interval a, Interval b)
    {
        return a.start<b.start;
    }
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        vector<Interval> res;
        sort(intervals.begin(),intervals.end(),cmp);
        res.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(res.back().end>=intervals[i].start)
            {
                
                Interval temp(res.back().start,max(res.back().end,intervals[i].end));
                res.pop_back();
                res.push_back(temp);//注意pop和push的顺序，第一次这里的顺序浪费了一些时间。
            }
            else
            {
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};
