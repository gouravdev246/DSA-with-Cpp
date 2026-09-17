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
         if (!head || !head->next || k == 0) {
            return head;
        }
        
        // Step 2: Compute length and find the tail node
        int len = 1;
        ListNode* tail = head;
        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }
        
        // Step 3: Handle cases where k >= len
        k = k % len;
        if (k == 0) {
            return head; // No rotation needed
        }
        
        // Connect tail to head to form a circular loop
        tail->next = head;
        
        // Step 4: Find the node just before the new head
        int stepsToNewTail = len - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }
        
        // Step 5: Update the head and break the circular link
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        
        return newHead;

        
    }
};