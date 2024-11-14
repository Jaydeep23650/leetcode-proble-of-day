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
    ListNode* rotateRight(ListNode* head, int k) {
        int length=0;
        ListNode* temp=head,*end=NULL;
        if(head==NULL)return head;
        deque<int>q;
        while(temp){
            q.push_back(temp->val);
            temp=temp->next;
        }
        k=k%q.size();
        while(k--){
            q.push_front(q.back());
            q.pop_back();
        }
        temp=head;
        while(temp){
            temp->val=q.front();
            q.pop_front();
            temp=temp->next;
        }
       return head;

    }
};