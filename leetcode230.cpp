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
    TreeNode* Kth(TreeNode* pRoot,int& target)
    {
        TreeNode* t=NULL;
        if(pRoot->left)  t=Kth(pRoot->left,target);
        target--;
        if(target==0) 
        {
            t =pRoot;
        }
        if(t==NULL && pRoot->right) t =Kth(pRoot->right,target);
        return t;
    }
    int kthSmallest(TreeNode* pRoot, int k)
        {
            if(pRoot==nullptr||k<=0) return 0;
            TreeNode* node = Kth(pRoot,k);
            return node->val;
        }



};