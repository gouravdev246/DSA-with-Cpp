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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head ;
        int count = 0 ;
        while(temp != nullptr){
            temp = temp->next ;
            count++;

        }
        if(count == 1){
            return temp ;
        }
        count = count / 2 ;
        ListNode* curr = head ;
        for(int i = 0 ; i < count - 1 ; i++){
            curr = curr->next ;
        }
        ListNode* copy = curr->next ;
        curr->next = copy->next ;
        delete copy ;
        return head ;


        
    }
};