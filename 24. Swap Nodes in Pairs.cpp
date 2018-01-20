/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while(head &&head->next)
        {
            ListNode* nn=head->next->next;
            prev->next=head->next;
            head->next->next=head;
            head->next=nn;
            prev=head;
            head=nn;
           
        }
        return dummy->next;
    }
};
