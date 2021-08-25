/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortMerge(ListNode* a,ListNode* b)
    {
        ListNode* res=NULL;
        
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        
        if(a->val<b->val)
        {
            res=a;
            res->next=sortMerge(a->next,b);
        }
        else
        {
            res=b;
            res->next=sortMerge(a,b->next);
            
        }
        
        return res;
        
    }
    void divide(ListNode* head,ListNode **a,ListNode** b)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            
            
        }
        
        *a=head;
        *b=slow->next;
        slow->next=NULL;
    }
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* a,*b;
        
        divide(head,&a,&b);
        
        a=sortList(a);
        b=sortList(b);
        
       head= sortMerge(a,b);
        
        return head;
        
        
    }
};
