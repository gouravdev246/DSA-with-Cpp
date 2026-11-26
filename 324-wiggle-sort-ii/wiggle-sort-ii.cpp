class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp(nums.size()) ; 
        
        sort(nums.begin() , nums.end());
        int half = (nums.size() +1 ) / 2  ;
        int i = half - 1 , j = nums.size() - 1 ;
        int count = 0 ;
        while(count < nums.size()){
            if(i >= 0){
                temp[count++] = nums[i--];
            }
            if(j >= half){
                temp[count++] = nums[j--] ;
            }
            
        }
        nums = temp ;

        
        
    }
};