class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy =new ListNode(-1);
        dummy->next=head;
      	//申请一个头节点指向head
        int dup;
        ListNode* cur = dummy;
      	//cur一直指向的是链表中确定存在的值.
      	//cur指针先指向头节点
        while(cur->next&&cur->next->next)
        {//如果head和head->next存在则进入循环
            if(cur->next->val==cur->next->next->val)
            {//如果head的值和head->next的值相同,
                dup = cur->next->val;// 把这个值记下来
                while(cur->next && cur->next->val==dup)//找到最后一个等于dup的地方
                {
                    cur->next = cur->next->next; //修改cur的next域的指向位置.
                }                
            }
            else
            {
                cur=cur->next; //不等的话!!! 给的链表的指针本来是正确的,所以不用修改,只需移动cur到									//下一个节点.
            }
        }
        return dummy->next;
    }
};
