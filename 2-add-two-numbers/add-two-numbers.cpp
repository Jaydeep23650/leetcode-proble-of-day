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
    // Recursive function to reverse the linked list
    ListNode* reverse(ListNode* head) {
        //  if the list is empty or has only one node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        // reverse the rest of the list
        ListNode* newHead = reverse(head->next);
        // Reverse the current node's pointer
        head->next->next = head;
        head->next = nullptr; // Set the next of the original head to nullptr
        return newHead; // Return the new head of the reversed list
    }


    //////////////////////////////////
    ListNode* solve1(ListNode* l1, ListNode* l2){
         ListNode* num1 = (l1);
        ListNode* num2 = (l2);
        
        ListNode* dummyHead = new ListNode(0); // Dummy node to simplify result list creation
        ListNode* current = dummyHead; // Pointer to build the result list
        int carry = 0; // Variable to hold carry during addition

        // Process both lists and carry
        while (num1 || num2 || carry) {
            int sum = carry; // Start with the carry
            // Add value from the first list if available
            if (num1) {
                sum += num1->val;
                num1 = num1->next; // Move to the next node in the first list
            }
            // Add value from the second list if available
            if (num2) {
                sum += num2->val;
                num2 = num2->next; // Move to the next node in the second list
            }

            carry = sum / 10; // Update carry
            current->next = new ListNode(sum % 10); // Create new node for the result
            current = current->next; // Move to the next node in the result list
        }

        // Reverse the result list before returning
        return (dummyHead->next);
    }

      /////////////////////////////////////////////////////////////////////////////////////

      ListNode* solve2(ListNode* l1, ListNode* l2){
          ListNode * num1=(l1);
          ListNode* num2=(l2);
          ListNode* dummy=new ListNode(0),*temp;
          int carry=0;
          temp=dummy;
          while(num1||num2||carry){
            int sum=carry;
             if(num1){
                sum+=num1->val;
                num1=num1->next;
             }
             if(num2){
                sum+=num2->val;
                num2=num2->next;
             }
             carry=sum/10;
             temp->next=new ListNode(sum%10);
             temp=temp->next;
          }
          dummy=dummy->next;
          return (dummy);

      }

    // Function to add two numbers represented by linked lists
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Reverse both input lists to make addition easier
        return solve2(l1,l2);
       
    }
};