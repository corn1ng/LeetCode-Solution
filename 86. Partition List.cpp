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
    ListNode* partition(ListNode* head, int x) {
        ListNode* da = new ListNode(-1);
        ListNode* xiao =new ListNode(-1);
        ListNode* dait=da;
        ListNode* xiaoit=xiao;
        if(!head) return head;
        while(head)
        {
            if(head->val<x)
            {
                ListNode* node =new ListNode(head->val);
                xiaoit->next =node;
                xiaoit=node;
            }
            else
            {
                ListNode* node =new ListNode(head->val);
                dait->next=node;
                dait=node;
            }
            head=head->next;
        }
        if(!xiao->next) return da->next;
        else
        {
            xiaoit->next=da->next;
            return xiao->next;
        }
        
    }
};
