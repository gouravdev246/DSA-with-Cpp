class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0, end = n - 1;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            if (nums[mid] == target) {
                return true;
            }
            
            // Edge Case: Handle duplicates at boundaries
            if (nums[st] == nums[mid] && nums[mid] == nums[end]) {
                st++;
                end--;
                continue;
            }
            
            // Scenario A: Left half is sorted
            if (nums[st] <= nums[mid]) {
                // Check if target lies within the sorted left half
                if (nums[st] <= target && target < nums[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } 
            // Scenario B: Right half is sorted
            else {
                // Check if target lies within the sorted right half
                if (nums[mid] < target && target <= nums[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return false;
    }
};
