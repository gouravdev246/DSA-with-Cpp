class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =  nums.size();
        sort(nums.begin() , nums.end());
        int ans = 0 ;
        int actual = 0 ;
        for(int num : nums){
            actual += num ;
        }
        
        for(int i = 0 ; i <= n ; i++){
            ans += i ;
        
        }
        return  ans - actual  ;
        
    }
};