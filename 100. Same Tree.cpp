/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p&&q||!q&&p) return false;
        return is(p,q);
    }
    bool is(TreeNode* p, TreeNode* q)
    {
        if(!p||!q) return true;
        if(p->val!=q->val) return false;
        if(p->left&&!q->left) return false;
        if(p->right&&!q->right) return false;
        if(!p->left&&q->left) return false;
        if(!p->right&&q->right) return false;
        return is(p->left,q->left)&&is(p->right,q->right);
    }
};