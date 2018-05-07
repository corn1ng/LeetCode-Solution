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
    ListNode* reverseBetween(ListNode* head, int m, int n) 
    {
        ListNode* tou =new ListNode(-1);
        tou->next = head;
        ListNode* pre =tou;
        if(n<=m) return head;
        int t =n-m;
        while(m>1)
        {
            pre=pre->next;
            m--;
        }
        ListNode* p = pre->next;
        for(int i=0;i<t;i++)
        {
            ListNode* post = p->next;
            p->next =post->next;
            post->next =pre->next;
            pre->next=post;
        }
        return tou->next;
    }
};
