class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left = 1 , right =  1 , ans = INT_MIN ;

        for(int i = 0 ; i < nums.size() ; i++ ){
            left = left == 0 ? 1 : left ;
            right = right == 0 ? 1 : right ;
            left *= nums[i] ;
            right *=nums[nums.size() - 1 - i ];
            ans = max(ans , max(right , left)); 
        }
        return ans ;
        
    }
};