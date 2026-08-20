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
    bool isPalindrome(ListNode* head) {
        vector<int> nums ;
        ListNode* temp = head ;
        while(temp != nullptr){
            nums.push_back(temp->val) ;
            temp = temp->next ;
        }
        int n = nums.size() ;
        int st = 0 , end = n -1 ;
        while(st <= end){
            if(nums[st] != nums[end]){
                return false ;
            }
            st++ ;
            end--;
        }
        return true ;
    }
};