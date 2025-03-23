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
      
    //   ListNode* solve1(ListNode* head, int n){
    //     ListNode* temp=head;
    //     ListNode* dummy = new ListNode(-2);
    //     dummy->next=head;
    //     ListNode* t=dummy;
    //     if(head==NULL)return NULL;
    //     while(n--){
    //         temp=temp->next;
    //     }
    //     while(temp){
    //         temp=temp->next;
    //         dummy=dummy->next;
    //     }
    //         dummy->next=dummy->next->next;
    //     return t->next;
        
    //   }

   
      ListNode* solve2(ListNode* head, int n){
        if(head==NULL)return head;
        ListNode *temp1=head,*temp2=head;
        ListNode* dummy =new ListNode(-1);
        dummy->next=head;
        temp2=dummy;

          while(n--){
            temp1=temp1->next;
          }
          while(temp1){
            temp1=temp1->next;
            temp2=temp2->next;
          }
         temp2->next=temp2->next->next;
          return dummy->next;
      }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
      return solve2(head,n);
      
    }
};