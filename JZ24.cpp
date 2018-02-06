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
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL) return NULL;
        ListNode* post;
        ListNode* prev=NULL;
        ListNode* node =pHead;
        while(node)
        {
            post =node->next;
            node->next =prev;
            prev=node;
            node=post;
        }
        return prev;
    }
};
//再次验证正常反转链表的时候不需要头结点，要不然反转完最前面多了一个结点。