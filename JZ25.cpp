class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* mer =new ListNode(-1);
        ListNode* chead =mer;
        while(pHead1&&pHead2)
        {
            if(pHead1->val>pHead2->val)
            {
                ListNode* node =new ListNode(pHead2->val);
                chead->next=node;
                chead=chead->next;
                pHead2=pHead2->next;
            }
            else if(pHead1->val<=pHead2->val)
            {
                ListNode* node =new ListNode(pHead1->val);
                chead->next=node;
                chead=chead->next;
                pHead1=pHead1->next;
            }
        }
        if(!pHead1)
        {
            while(pHead2)
            {
                ListNode* node =new ListNode(pHead2->val);
                 chead->next=node;
                chead=chead->next;
                pHead2=pHead2->next;
            }
        }
        if(!pHead2)
        {
            while(pHead1)
            {
                ListNode* node =new ListNode(pHead1->val);
                 chead->next=node;
                chead=chead->next;
                pHead1=pHead1->next;
            }
        }
        return mer->next;
    }
};