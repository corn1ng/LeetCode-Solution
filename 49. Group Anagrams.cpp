class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size();
        vector<vector<string> > res;
        map<string,vector<string>> maps;
        for(int i=0;i<len;i++)
        {
            string s =strs[i];
            sort(s.begin(),s.end());
            maps[s].push_back(strs[i]);
        }
        for (map<string, vector<string> >::iterator iter = maps.begin(); iter != maps.end(); iter++)
            res.push_back(iter->second);
        
        return res;
    }
};
