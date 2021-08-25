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
    bool isPalindrome(ListNode* head) {
       vector<int > v;
        
        bool status=true;
        ListNode *temp=head;
        int counter=0;
        while(temp!=NULL)
        {
            counter=counter+1;
            temp=temp->next;
            
        }
        cout<<counter/2;
        if(counter%2!=0)
            
        {temp=head;
            int num=counter/2;
            while(num--)
            {
                v.push_back(temp->val);
                temp=temp->next;
                
            }
         temp=temp->next;
         
         int len=v.size()-1;
         while(temp!=NULL && len>=0)
         {
             if(temp->val!=v[len]){
                 
                 status=false;
                 break;}
             len--;
             temp=temp->next;
                 
         }
        }
         else  if(counter%2==0)
            
        {temp=head;
            int num=counter/2;
            while(num--)
            {
                v.push_back(temp->val);
                temp=temp->next;
                
            }
      
         
         int len=v.size()-1;
         while(temp!=NULL && len>=0)
         {
             if(temp->val!=v[len]){
                 
                 status=false;
                 break;}
             len--;
             temp=temp->next;
                 
         }
        
        }
        return status;
    }
};