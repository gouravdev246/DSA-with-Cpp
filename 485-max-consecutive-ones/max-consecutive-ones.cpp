class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size() ;
        int nmax = 0 ; 
        int maxc = 0 ; 
        for(int i = 0 ; i < n ; i++ ){
            if(nums[i] == 1){
                maxc+=1 ;
            }else{
                maxc = 0 ;
            }
           nmax = max(maxc , nmax );

        }
        return nmax ;
    }
};