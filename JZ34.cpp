class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int> > results;
        vector<int> one;
        if(!root) return results;
        DFS(one,expectNumber,0,root,results);
		return results;
    }
    void DFS(vector<int>& one,int expect,int sum,TreeNode* node,vector<vector<int> >& results)
    {
        one.push_back(node->val);
        sum = sum+node->val;
        if(node->left==NULL&&node->right==NULL&&sum == expect)
        {
            results.push_back(one);
        }
        if(node->left)
        {
            DFS(one,expect,sum,node->left,results);
        }
        if(node->right)
        {
            DFS(one,expect,sum,node->right,results);
        }
        one.pop_back();
        return ;
    }
};