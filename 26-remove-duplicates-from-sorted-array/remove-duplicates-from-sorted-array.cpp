class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int , int> m ;
        int x = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m.find(nums[i]) == m.end()){
                m[nums[i]] = 1 ;
                nums[x] = nums[i] ;
                x++;
            }else{
                continue;
            }
        }
        return x ;
    }
};