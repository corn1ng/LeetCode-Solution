/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode* tou1 =pHead1;
        ListNode* tou2 =pHead2;
        int size1 =0;
        int size2 =0;
        while(tou1!=NULL)
        {
            size1++;
            tou1=tou1->next;
        }
        while(tou2!=NULL)
        {
            size2++;
            tou2 =tou2->next;
        }
        if(size1>size2)
        {
            int t =size1-size2;
            while(t>0)
            {
                pHead1 = pHead1->next;
                t--;
            }
        }
        else
        {
            int t =size2-size1;
            while(t>0)
            {
                pHead2 =pHead2->next;
                t--;
            }
        }
        while(pHead1)
        {
            if(pHead1->val==pHead2->val) return pHead1;
            pHead1 = pHead1->next;
            pHead2 = pHead2->next;
        }
        return NULL;
        
    }
};
//先求两个长度然后再走。