class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > result;
	    
	    dfs(num, 0, result);
	    return result;
    }
    
    // permute num[begin..end]
    // invariant: num[0..begin-1] have been fixed/permuted
	void dfs(vector<int> &num, int index, vector<vector<int> > &result)	{
		if (index >= num.size()) {
		    // one permutation instance
		    result.push_back(num);
		    return;
		}
		
		for (int i = index; i < num.size(); i++) {
		    swap(num[index], num[i]);
		    dfs(num, index + 1, result);
		    // reset
		    swap(num[index], num[i]);
		}
    }
};
