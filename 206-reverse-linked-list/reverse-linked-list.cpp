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
    ListNode* reverseList(ListNode* head) {
        ListNode *d=NULL;
        ListNode *temp=head;
        while(temp){
            ListNode *n=temp->next;
            temp->next=NULL;
            temp->next=d;
            d=temp;
            temp=n;
        }
        return d;


    }
};