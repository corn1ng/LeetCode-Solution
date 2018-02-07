class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==NULL) return ;
        swap(pRoot->left,pRoot->right);
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};