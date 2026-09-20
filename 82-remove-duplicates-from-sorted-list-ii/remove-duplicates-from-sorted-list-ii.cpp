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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* dummy = new ListNode(0) ;
       ListNode* curr = head ;
       dummy->next = head ;
       ListNode* temp = dummy ;
       while(curr != nullptr && curr->next != nullptr){
        bool isDuplicate = false ;
        while(curr->next != nullptr && curr->val == curr->next->val){
            isDuplicate = true ;
            curr = curr->next ;


        }
        if (isDuplicate) {

                temp->next = curr->next; 
            } else {
                temp = temp->next;
            }
        curr = curr->next ;
       }
       return dummy->next ;
        
    }
};