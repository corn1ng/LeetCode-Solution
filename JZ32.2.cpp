/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int> > result;
            if(!pRoot) return result;
            queue<TreeNode*> q;
            q.push(pRoot);
            while(!q.empty())
            {
                int levelcount = 0;
                int hi = q.size();
                vector<int> c;
                while(levelcount++ < hi)
                {
                    TreeNode *t = q.front();
                    q.pop();
                    c.push_back(t->val);
                    if(t->left) q.push(t->left);
                    if(t->right) q.push(t->right);
                }
                result.push_back(c);
            }
            return result;
        }
};