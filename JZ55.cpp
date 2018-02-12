/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int len(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left = TreeDepth(root->left);
        int right = TreeDepth(root->right);
        return left > right ? left + 1 : right + 1;
    }
    
    int TreeDepth(TreeNode* pRoot)
    {
        if(!pRoot) return 0;
        return len(pRoot);
    }
};