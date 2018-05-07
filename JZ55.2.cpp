class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot==NULL) return true;
        int left = getdepth(pRoot->left);
        int right =getdepth(pRoot->right);
        if((left-right)<=1&&(right-left)<=1) 
            return (IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right));
        else
            return false;
    }
    int getdepth(TreeNode* pRoot)
    {
        if(!pRoot) return 0;
        int left =getdepth(pRoot->left);
        int right =getdepth(pRoot->right);
        return max(left,right)+1;
    }
};
//
class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        int dep=0;
        return IB(pRoot,dep);
    }
    bool IB(TreeNode* pRoot,int& length)
    {
        if(pRoot==NULL) 
        {    
            length =0;
            return true;
        }
        int left = 0;
        int right = 0;
       if(IB(pRoot->left,left)&&IB(pRoot->right,right))
       {
           int dif = left - right;
           if(dif<-1 || dif >1)
                return false;
           length = (left > right ? left : right) + 1;
           return true;
       }
        return false;
    }
};
//递归从上往下，但是要把边界先赋值，然后写递归表达式。