class Solution {
public:
    int minMoves(vector<int>& nums) {
        // int mini = INT_MAX ;
        int maxel = *max_element(nums.begin() , nums.end());
        int count = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            while(nums[i] != maxel){
                nums[i] += 1 ;
                count++;
            }


        }
        return count ;
    }
};