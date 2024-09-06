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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>mp;
        for(auto it:nums){
            mp[it]=1;
        }
         ListNode* d=new  ListNode(0);
          ListNode* temp=head,*cur=d;
          while(temp){
            if(!mp[temp->val]>0){
                // cur=NULL;
                //  ListNode* t=temp;
                //  t->next=NULL;
                cur->next=temp;
                cur=cur->next;
            }else cur->next=NULL;
            temp=temp->next;
          }
        return  d->next;
    }
};