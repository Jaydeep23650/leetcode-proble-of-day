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
      
        ListNode* temp=head;
       ListNode* dummy = new ListNode(-2);
         dummy->next=head;
         ListNode* t=dummy;
        if(head==NULL)return NULL;
        while(n--){
            temp=temp->next;
        }
        while(temp){
            temp=temp->next;
            dummy=dummy->next;
        }
        // if(dummy->next){
            // dummy->val=dummy->next->val;

            dummy->next=dummy->next->next;
        // }
        return t->next;
        
    }
};