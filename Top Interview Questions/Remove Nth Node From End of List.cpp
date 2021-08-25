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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int count=0;
        //n=n-1;
        ListNode* temp=head;
        
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        
        int dist=count-n;
        ListNode* l1=head;
        
        while(dist--)
            l1=l1->next;
        
        temp=head;
        ListNode *val=l1;
        
        if(head==l1)
            head=head->next;
        else
        {
            while(temp->next!=l1)
                temp=temp->next;
            
            temp->next=temp->next->next;
        }
      // dist--;
        
      return head;
        
    }
};