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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head,*fast=NULL;
        if( head==NULL)return false;
        if(head->next)fast=head->next;
        else return false;
        while(fast&&fast->next){
            if(slow==fast)return true;
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
};