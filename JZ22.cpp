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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL||k==0) return NULL;
        ListNode* tou =new ListNode(-1);
        tou->next=pListHead;
        ListNode* tou2 =tou;
        while(k>=1)
        {	
            tou2 = tou2->next;
            if(tou2==NULL) return NULL;
            k--;
            //我是真的智障，写while循环k不减小。打扰了。
        }
        while(tou2!=NULL)
        {
            tou = tou->next;
            tou2 = tou2->next;
        }
        return tou;
    }
};