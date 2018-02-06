/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if (pHead == NULL || pHead->next == NULL) 
        {
            return NULL;
        }
        ListNode* tou =new ListNode(-1);
        tou =pHead;
        ListNode* tou2=tou;
        while(tou && tou2->next)
        {
            tou =tou->next;
            tou2 =tou2->next->next;
            if(tou==tou2)
            {
                tou2 =pHead;
                while(tou2!=tou)
                {
                    tou=tou->next;
                    tou2=tou2->next;
                }
                return tou2;
            }
        }
        return NULL;
    }
};