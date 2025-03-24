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

   // using length
   ListNode* solve1(ListNode* head, int k){
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

   /// without space 

   ListNode * solve2(ListNode* head, int k){
   if (!head || !head->next || k == 0) return head; 

        // Step 1: Compute the length of the list
        int length = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            length++;
        }

        // Step 2: Compute effective k
        k = k % length;
        if (k == 0) return head; // No rotation needed

        // Step 3: Connect tail to head to form a circular linked list
        tail->next = head;

        // Step 4: Find new tail (length - k - 1 steps from head)
        ListNode* newTail = head;
        for (int i = 0; i < length - k - 1; i++) {
            newTail = newTail->next;
        }

        // Step 5: Break the cycle and set new head
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;

   }
    ListNode* rotateRight(ListNode* head, int k) {
       
     return solve2(head,k);
    }
};