class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive ;
        vector<int> negetive ;
        vector<int> ans ;
        int n = nums.size() ;
        for(int num : nums ){
            if(num < 0){
                negetive.push_back(num);
            }else{
                positive.push_back(num) ;
            }
        }
        for(int i = 0 ; i < n / 2 ; i++){
            ans.push_back(positive[i]) ;
            ans.push_back(negetive[i]) ;
        }
        return ans ;
        
    }
};