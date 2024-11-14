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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k<=1)return head;
        ListNode* temp=head;
        ListNode*  myhead=new ListNode(0);
        ListNode* t=myhead;
        stack<ListNode*>s;
        while(temp){
            s.push(temp);
             temp=temp->next;
            if(s.size()>=k){
                while(!s.empty()){
                    s.top()->next=NULL;
                    myhead->next=s.top();
                    s.pop();
                    myhead=myhead->next;
                }
               
                myhead->next=temp;
            }
           
        }
       return t->next;
    }
};