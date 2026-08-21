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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head ;
        int count = 0 ;
        while(curr != nullptr){
            curr = curr->next ;
            count++;
        }
        if(count == 1){
            return curr;
        }
        count = count - n ;
        if(count == 0){
            ListNode* first = head ;
            head = first->next ;
            delete first ;
            return head ;
        }
        int temp = 1 ;
        ListNode* copy = head ;
        while(temp < count){
            copy = copy->next ;
            temp++ ;
        }
        ListNode* dup = copy->next ;
        copy->next = dup->next;
        delete dup ;
        return head;
        
    }
};