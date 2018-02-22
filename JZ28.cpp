class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot)
    {
        return is(pRoot,pRoot);
    }
    bool is(TreeNode* p1,TreeNode* p2)
    {
        if(p1==NULL&&p2!=NULL) return false;
        if(p1!=NULL&&p2==NULL) return false;
        if(p1==NULL&&p2==NULL) return true;
        if(p1->val==p2->val)
        {
            return is(p1->left,p2->right)&&is(p1->right,p2->left);
        }
        return false;
    }
};