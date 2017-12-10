class Solution {
public:
    vector<string> res;  
    vector<string> generateParenthesis(int n) {
        string s;     
        DFS(s,n,n);
        return res;
    }
    void DFS(string s,int zuo,int you)
    {
        if(you<zuo) return;
        if(you==0 && zuo==0)
        {
            res.push_back(s);
            return;
        }
        if(zuo>0)   DFS(s+'(',zuo-1,you);
        if(you>0)   DFS(s+')',zuo,you-1);
    }
};
