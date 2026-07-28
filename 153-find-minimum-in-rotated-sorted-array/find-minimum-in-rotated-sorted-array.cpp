class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() ;
        int mina = INT_MAX ;
        int st = 0 , end = n - 1 ;
        // if(n == 1){
        //     return nums[0] ;

        // }
        // if( n == 2 && nums[0] > nums[1]){
        //     return nums[1] ;
        // }
        // if( n == 2 && nums[0] < nums[1]){
        //     return nums[0] ;
        // }
        while(st < end){
            int mid = st + (end - st) / 2 ;
            
           if(nums[mid] > nums[end]){
            st = mid + 1 ;
           }else{
            end = mid ;
           }
        }
        return nums[st] ;
        
    }
};