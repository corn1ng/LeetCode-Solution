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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,inorder.begin(),inorder.end(),postorder,postorder.begin(),postorder.end());
    }
    TreeNode* helper(vector<int> in,vector<int>::iterator begin1,vector<int>::iterator end1,vector<int> post,vector<int>::iterator begin2,vector<int>::iterator end2)
    {
        if(begin1>=end1||begin2>=end2) return 0;
        int value = *(end2-1);
        TreeNode *pnode = new TreeNode(value);
        vector<int>::iterator it = find(begin1,end1,value);
        int leftlength = it-begin1;
        pnode->left = helper(in,begin1,it,post,begin2,begin2+leftlength);
        pnode->right = helper(in,it+1,end1,post,begin2+leftlength,end2-1);
        return pnode;
    }
};
