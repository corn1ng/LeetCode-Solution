/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
          vector <int>  result;
          stack<int> arr;
          ListNode* p=head;
          while(p!=NULL)
          {
           arr.push(p->val);
           p=p->next;
          }
         int len=arr.size();
         for(int i=0;i<len;i++)
          {
           result.push_back(arr.top());  
           arr.pop();
         }
         return  result;
    }
};
//用栈来从后往前打印