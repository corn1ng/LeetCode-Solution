class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
        if(!pHead) return NULL;
        ListNode* tou =new ListNode(-1);
        tou->next =pHead;
        ListNode* cur=tou;
        while(cur->next->next&& cur->next)
        {
           if(cur->next->val==cur->next->next->val)
           {
               int dup =cur->next->val;
               while(cur->next && cur->next->val==dup)
               {
                   cur->next=cur->next->next;
               }
           }
            else
            {
                cur =cur->next;
            }
        }
        return tou->next;
    }
};