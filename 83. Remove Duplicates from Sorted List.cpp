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
    ListNode* deleteDuplicates(ListNode* head) {
        // 申请两个节点,头节点和尾节点.
        if(head==NULL||head->next==NULL) return head;
        ListNode* tou =head->next;
        ListNode* tail=head;
        
        while(tou!=NULL)
        {
            if(tou->val==tail->val)  //相等的话就头节点动
            {
                tail->next =tou->next;
                tou = tou->next;
                //tou->next=NULL;  
            }
            else
            {   //不等的话就尾节点改变.
                tail =tail->next;
            }
        }
        return head;
    }
};

//思想一样,但是用单指针
ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        while(cur && cur->next){
            if(cur->val==cur->next->val){
                cur->next=cur->next->next;
            }
            else
                cur=cur->next;
        }
        return head;
    }