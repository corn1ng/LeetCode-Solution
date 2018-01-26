class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    if(!head||!head->next) return head;
    ListNode* reversehead;
    ListNode* prev=NULL; //前置节点指针,一定要设置为NULL,要不然会超时.
    ListNode* p =head;
    ListNode* post=NULL; 
    while(p!=NULL)
    {
        post = p->next;//后指针指向p的后一个,
        if(post == NULL) reversehead =p; //如果后节点为空,说明是最后一个节点.
        p->next =prev; //反转,把p->next指向前一个节点.
        prev = p;//反转结束,prev向前移动
        p = post;// p向前移动.
    }
    return reversehead;
    }
};
