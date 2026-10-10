class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int m = acc.size() , n = acc[0].size();
        int maxm = INT_MIN ;
        for(auto cus : acc){

            int sum = accumulate(cus.begin() , cus.end() , 0);

            maxm = max(sum , maxm);
            
        }
        return maxm ;

        
    }
};