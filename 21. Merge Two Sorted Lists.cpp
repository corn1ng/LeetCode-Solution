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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        //申请一个节点.最后有一个头结点,这样比较好操作,最后返回head->next即可,没啥影响的.
        ListNode* l3 =new ListNode(-1);
        l3->val=NULL;
        l3->next=NULL;
        ListNode* head =l3;
        while(l1!=NULL&&l2!=NULL)
        {
            ListNode* node =new ListNode(-1);
            node->next=NULL;
            l3->next=node;
            if(l1->val <= l2->val)
            {
                node->val = l1->val;
                l1 = l1->next;
            }
            else
            {
                node->val = l2->val;
                l2 = l2->next;
            }
            l3 =node; //保持每次的接口都一样.
        }
        while(l1!=NULL) //!!!!! 是 where不是if .... 第一次卡在这傻了好久.
        {
            ListNode* node =new ListNode(-1);
            l3->next=node;
            node->val =l1->val;
            l1=l1->next;
            node->next =NULL;
            l3 = node;
        }      
        
        while(l2!=NULL)
        {
            ListNode* node =new ListNode(-1);
            l3->next=node;
            node->val =l2->val;
            l2=l2->next;
            node->next =NULL;
            l3 = node;
        }
      
        return head->next;
    }
};
