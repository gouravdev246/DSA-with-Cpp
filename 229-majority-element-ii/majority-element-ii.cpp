class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> m ;
        vector<int> ans ;
        int n = nums.size() ;
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(m.find(nums[i]) != m.end()){
                m[nums[i]]++ ;
            }else{
                m[nums[i]] = 1 ;
            }
        }
     for (auto &p : m) {
    if (p.second > n / 3) {
        ans.push_back(p.first);
    }
}
        return ans ;
        
    }
};