/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA ;
        ListNode* temp2 = headB ;
        int len1 = 0 ;
        int len2 = 0 ;
        while(temp1 != NULL){
            temp1 = temp1->next;
            len1++;
        }
        while(temp2 != NULL){
            temp2 = temp2->next;
            len2++;
        }

        while(len1 > len2){
            len1--;
            headA = headA->next ;
        }

        while(len1 < len2){
            len2--;
            headB = headB->next ;
        }
        while(headA != headB){
            headA = headA->next ;
            headB = headB->next ;
        }
        return headA ;
    }
};