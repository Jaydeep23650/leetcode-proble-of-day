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
   
   ListNode* solve(ListNode * node){
    if(node==NULL||node->next==NULL)return node;
    ListNode* temp=solve(node->next);
    node->next->next=node;
    node->next=NULL;
    return temp;
   }

    ListNode* reverseList(ListNode* node) {
        return solve(node);
    }
};