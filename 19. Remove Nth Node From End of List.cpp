class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        
        ListNode* kuai = head; //设置快指针
        ListNode* man =head; //设置慢指针
        for(int i=0;i<n;i++)
        {
            kuai =kuai->next; //首先让快指针先走,这样当快指针走到头的时候,
          						//刚好慢指针就到了要删除的地方
        }
        if(kuai==NULL)
            return head->next;  // 块指针为空的话,直接返回head->next;
        while(kuai->next!=NULL)
        {	//快慢一起走
            kuai =kuai->next;
            man =man->next;
        }
        man->next =man->next->next; //进行删除操作.
        return head;
    }
};
