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

    ListNode* solve1(ListNode* list1, ListNode* list2){
         ListNode * dummy=new ListNode(0);
        ListNode *temp=dummy,*t1=list1,*t2=list2;
        while(t1&&t2){
            if(t1->val>=t2->val){
              temp->next=t2;
              t2=t2->next;
              temp=temp->next;
              temp->next=NULL;
            }else {
                temp->next=t1;
              t1=t1->next;
              temp=temp->next;
              temp->next=NULL; 
            }
        }
        if(t1)temp->next=t1;
        if(t2)temp->next=t2;
        return dummy->next;
    } 
    
    ListNode* solve2(ListNode* list1, ListNode* list2){
        ListNode *temp1=NULL;
        ListNode* dummy=new ListNode(0);
         temp1=dummy;
        while(list1 && list2){
           if(list1->val>=list2->val){
            temp1->next=list2;
             list2=list2->next;
            temp1=temp1->next;
           }else{
             ListNode *next=list1->next;
             temp1->next=list1;
              list1=list1->next;
             temp1=temp1->next;
           }
        }
        if(list1)temp1->next=list1;
        if(list2)temp1->next=list2;
        return dummy->next;
    }


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       return solve2(list1,list2);
    }
};