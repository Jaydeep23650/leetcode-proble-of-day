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
    // using recursive methode
   ListNode* solve(ListNode * node){
    if(node==NULL||node->next==NULL)return node;
    ListNode* temp=solve(node->next);
    node->next->next=node;
    node->next=NULL;
    return temp;
   }
    // solve by using dummy node 
   ListNode* solve2(ListNode *node){
    if(node==NULL)return node;
    ListNode* temp,*temp2,*dummy(0);
    temp=node;
    temp2=NULL;
    while(temp){
        ListNode* l=temp->next;
        temp->next=temp2;
        temp2=temp;
        temp=l;
        
    }
    return temp2;
   }

    ListNode* reverseList(ListNode* node) {
        return solve2(node);
    }
};