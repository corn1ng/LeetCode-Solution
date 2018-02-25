class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(!pHead) return NULL;
        RandomListNode* tou =pHead;
        RandomListNode* tou2=pHead;
        RandomListNode* tou3 =pHead;
        while(tou!=NULL)
        {
            RandomListNode* node =new RandomListNode(tou->label);
            node->random =NULL;
            RandomListNode* mynext =tou->next;
            tou->next =node;
            node->next =mynext;
            tou=tou->next->next;
        }
        //RandomListNode* tou2 =tou;
        while(tou2!=NULL)
        {
            RandomListNode* node =tou2->random;
            if(node)
            {
                tou2->next->random =node->next;
            }
            tou2=tou2->next->next;
        }

		RandomListNode *pCloneHead = pHead->next;
        RandomListNode *tmp;
        while(tou3->next){
            tmp = tou3->next;
            tou3->next =tmp->next;
            tou3 = tmp;
        }
        return pCloneHead;
        
    }
};