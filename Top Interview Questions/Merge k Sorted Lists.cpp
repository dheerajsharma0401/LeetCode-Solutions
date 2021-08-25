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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy=NULL;
        vector<int> v;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* head=lists[i];
            ListNode* temp=head;
           while(temp!=NULL){
               v.push_back(temp->val);
               temp=temp->next;
        }
        }
        sort(v.begin(),v.end());
            
            ListNode* newh=new ListNode(-1);
            ListNode* pt=newh;
            for(int i=0;i<v.size();i++)
            {
                ListNode* n=new ListNode(v[i]);
                pt->next=n;
                pt=n;
                
            }
            
            newh=newh->next;
            return newh; 
        
       // return dummy;
        
    }
};