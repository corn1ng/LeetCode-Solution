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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> result;
        // 存引用
        queue<TreeNode*> q;
        if(root==NULL) return result;
        q.push(root);
        while(q.size()!=0)
        {
            TreeNode* now =q.front();
            q.pop();
            result.push_back(now->val);
            if(now->left!=NULL) q.push(now->left);
            if(now->right!=NULL) q.push(now->right);
        }
        return result;
    }
};