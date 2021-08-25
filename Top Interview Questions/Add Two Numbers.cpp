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
    
    ListNode* reverse(ListNode* root)
    {
        ListNode* prev=NULL,*curr=root,*next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            
            
            prev=curr;
            curr=next;
            
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
     //   l1=reverse(l1);
       // l2=reverse(l2);
        
        
        //if(l1->val>l2->val)
          //  swap(l1,l2);
        
        
        ListNode* newhead=NULL;
        int carry=0;
        
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            if(l1)
            {
                carry+=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                carry+=l2->val;
                l2=l2->next;
            }
            
            int data=carry%10;
            carry=carry/10;
            ListNode* newnode=new ListNode(data);
            newnode->next=newhead;
            newhead=newnode;
        }
        
       newhead=reverse(newhead);
        return newhead;
    }
};