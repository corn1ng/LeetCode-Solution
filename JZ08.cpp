
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        TreeLinkNode* ne=NULL;
        TreeLinkNode* pre =NULL;
        if(pNode->right!=NULL) //如果有右子树。找到右子树的最左结点。
        {
            ne = pNode->right;
            while(ne!=NULL)
            {
                pre = ne;
                ne = ne->left;
            }
            return pre;
        }
         while(pNode->next!=NULL){ //没右子树，则找第一个当前节点是父节点左孩子的节点
            if(pNode->next->left==pNode) return pNode->next;
            pNode = pNode->next;
        }
        return NULL; // 都没找到，返回NULL;
    }
};