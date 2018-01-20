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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        ListNode* tou =head;
        ListNode* tou1 =head;
        int number =1;
        while(tou->next!=NULL)
        {
            number++;
            tou=tou->next;
        }
        tou->next = head; //先找到尾巴,把首尾连接起来.
        
        int n =number-k%number;//  这里要取余,因为有的case会大于number的个数.
        while(n>1)
        {
            tou1=tou1->next;
            n--;
        }
        ListNode* a =tou1->next; //找到现在的头结点
        tou1->next=NULL; //断开连接.
        return a;       
    }
};
