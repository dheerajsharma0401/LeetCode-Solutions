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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* temp=l1;
        vector<int> v;
        
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
            
        }
        
        temp=l2;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
            
        }
        
        
        sort(v.begin(),v.end());
        
        ListNode* n=new ListNode(-1);
        ListNode* ptr=n;
        for(int i=0;i<v.size();i++)
        {
            ListNode* node=new ListNode(v[i]);
            ptr->next=node;
            ptr=node;
            
        }
        n=n->next;
        
        return n;
        
    }
};