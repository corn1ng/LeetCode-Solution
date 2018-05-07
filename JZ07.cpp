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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         return helper(preorder, preorder.begin(), preorder.end(), inorder, inorder.begin(), inorder.end());
    }
    TreeNode* helper(vector<int> pre,vector<int>::iterator begin1,vector<int>::iterator end1, vector<int> in, vector<int>::iterator begin2,vector<int>::iterator end2)
    {
        if(begin1>=end1|| begin2>=end2)  return 0;
        TreeNode* root =new TreeNode(-1);
        root->val = *begin1;
        vector<int>::iterator it = find(begin2, end2, *begin1);  
        int leftlength =it - begin2;
        root->left = helper(pre,begin1+1,begin1+1+leftlength,in,begin2,it);
        root->right= helper(pre,begin1+1+leftlength,end1,in,it+1,end2);
        return root;
    }
};
//同leetcode 105