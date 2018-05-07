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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long num1 =sum(l1);
        unsigned long long num2 =sum(l2);
        unsigned long long res = num1+num2;
        ListNode *node =new ListNode(res%10);
        ListNode *wei = node;
        while(res/10!=0)
        {
            res =res/10;
            ListNode *s =new ListNode(res%10);
            wei->next = s;
            wei = s;
        }
        return node;
    }
    
    unsigned long long sum(ListNode* l1)
    {
        unsigned long long res=0;
        unsigned long long digit=1;
        while(l1!=NULL)
        {
            res =res+ l1->val*digit;
            digit =digit*10;
            l1 =l1->next;
        }
        return res;
    }
};
