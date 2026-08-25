class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curr = 0 ;
        double maxi = INT_MIN;
        int j = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            curr += nums[i];
            if(i - j + 1 == k){
                maxi = max(maxi , curr);
                curr -= nums[j];
                j++;
            }
        }
        return maxi / (double)k ;
        
    }
};