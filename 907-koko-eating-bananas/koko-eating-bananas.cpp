class Solution {
public:
    int minEatingSpeed(vector<int>& nums, int h) {
        int low = 1 , high = *max_element(nums.begin() , nums.end())  ;
        int  ans = INT_MAX , n = nums.size()  ;
        

        while(low <= high){
            int mid = low + (high - low) / 2 ;

            long long  totalh = 0 ;
            for(int i = 0 ; i < n ; i++){
                totalh += ((long long)nums[i] + mid - 1) / mid;

            }
            if(totalh <= h){
                ans = mid ;
                high = mid - 1 ;
            }else{
                low = mid + 1 ;
            }

        }
        return ans ;
        
    }
};