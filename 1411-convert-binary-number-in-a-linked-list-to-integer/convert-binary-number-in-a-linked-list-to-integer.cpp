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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head ;
        vector<int> nums ;
        while(temp != nullptr){
            nums.push_back(temp->val);
            temp = temp->next ;
        }
        
        int decimalVal = 0 ;
        for(int num : nums){
            decimalVal = (decimalVal << 1) | num ;
        }



        return decimalVal ;

    }
};